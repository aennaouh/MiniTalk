/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 00:53:34 by aennaouh          #+#    #+#             */
/*   Updated: 2023/01/17 21:57:34 by aennaouh         ###   ########.fr       */
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

int	main(int ac, char **av)
{
	int	i;
	int	pid;

	i = 0;
	if (ac == 3)
	{
		if (av[2][i] == 0)
			exit(0);
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
	}
	else
		ft_putstr("err num arg");
}
