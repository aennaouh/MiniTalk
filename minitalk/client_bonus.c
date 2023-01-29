/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:46:54 by aennaouh          #+#    #+#             */
/*   Updated: 2023/01/17 22:07:59 by aennaouh         ###   ########.fr       */
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
		usleep(600);
	}
}

void	ft_msg(int sig)
{
	write(1, "msg sent", 9);
	(void)sig;
}

int	main(int ac, char **av)
{
	int	i;
	int	pid;

	i = 0;
	if (ac == 3)
	{
		if (av[2][i] == 0)
			exit(0);
		signal(SIGUSR2, ft_msg);
		while (av[2][i])
		{
			pid = ft_atoi(av[1]);
			if (pid < 1)
			{
				write(2, "Invalid PID!\n", 13);
				return (1);
			}
			ft_send(pid, av[2][i]);
			i++;
			usleep(100);
		}
		ft_send(ft_atoi(av[1]), av[2][i]);
	}
	else
		ft_putstr("err num arg");
}
