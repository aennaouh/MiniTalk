/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:33:20 by aennaouh          #+#    #+#             */
/*   Updated: 2022/12/28 23:28:01 by aennaouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>


void send_c(int pid){
	kill(pid, SIGUSR1);	
}

void	handler(int sig, siginfo_t *c_pid, void *content)
{
	(void)content;
	static int i = 7;
	static char c;
	int client_pid = c_pid -> si_pid;
	if (sig == 30)
		c |= 1 << i;
	if (i == 0)
	{
		if(c == '\0'){
			send_c(client_pid);
		printf("%d", client_pid);
		}
		write(1, &c, 1);
		i = 7;
		c = 0;
	}
	else
		i--;
}

int	main ()
{
	struct sigaction handl;
	
	handl.sa_sigaction = handler;
	printf("%d\n" , getpid()); 
	sigaction(SIGUSR1, &handl, NULL);
	sigaction(SIGUSR2, &handl, NULL);
	while(1)
		pause();
}
