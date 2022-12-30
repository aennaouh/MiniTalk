/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:35:08 by aennaouh          #+#    #+#             */
/*   Updated: 2022/12/30 00:27:36 by aennaouh         ###   ########.fr       */
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

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 3)
	{
		if (atoi(av[1]) <= 0)
			exit(1);
		while (av[2][i])
		{
			ft_send(atoi(av[1]), av[2][i]);
			i++;
		}
	}
	else
		ft_printf("%s\n", "err num arg");
	return (0);
}
