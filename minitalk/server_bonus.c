/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:46:57 by aennaouh          #+#    #+#             */
/*   Updated: 2023/01/15 23:55:27 by aennaouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int sig, siginfo_t *c_pid, void *content)
{
	static int	i;
	static char	c;
	static int	client_pid;

	if (client_pid != c_pid -> si_pid)
	{
		i = 7;
		c = 0;
		client_pid = c_pid -> si_pid;
	}
	if (sig == SIGUSR1)
		c |= 1 << i;
	if (i == 0)
	{
		write(1, &c, 1);
		if (c == 0)
		{
			kill(client_pid, SIGUSR2);
		}
		i = 7;
		c = 0;
	}
	else
		i--;
	(void)content;
}

int	main(void)
{
	struct sigaction	handl;

	handl.sa_sigaction = handler;
	handl.sa_flags = SA_SIGINFO;
	ft_putnbr(getpid());
	ft_putstr("\n");
	sigaction(SIGUSR1, &handl, NULL);
	sigaction(SIGUSR2, &handl, NULL);
	while (1)
		pause();
}
