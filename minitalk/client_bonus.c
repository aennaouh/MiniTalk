/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:46:54 by aennaouh          #+#    #+#             */
/*   Updated: 2022/12/29 22:45:54 by aennaouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_send(int pid, char c)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if ((c >> i) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i--;
		usleep(500);
	}
}

void	ft_msg(int sig)
{
	write(1, "msg sent", 9);
	(void)sig;
}

int	main(int ac, char **av)
{
	int	i ;

	i = 0 ;
	// if (av[2][i]== 0)
	// 	exit(0);
	if (atoi(av[1]) <= 0)
		exit(1);
	if (ac != 3)
	{
		ft_printf("%s\n", "err num arg");
		exit(1);
	}
	signal(SIGUSR2, ft_msg);
	while (av[2][i])
	{
		ft_send(atoi(av[1]), av[2][i]);
		i++;
	}
	ft_send(atoi(av[1]), av[2][i]);
	(void)ac;
}