/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:33:20 by aennaouh          #+#    #+#             */
/*   Updated: 2022/12/28 17:39:20 by aennaouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void	handler(int sig)
{
	static int i = 8;
	static char c = 0;

	if (sig == 30)
		c |= 1 << i;
	if (i == 1){
		i = 8;
		write(1, &c, 1);
		c = 0;
	}
	else
		i--;
}
int	main ()
{
	printf("%d\n" , getpid()); 
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	while(1)
		pause();
}
