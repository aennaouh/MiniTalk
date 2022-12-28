/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 22:33:20 by aennaouh          #+#    #+#             */
/*   Updated: 2022/12/28 16:03:16 by aennaouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void	handler(int sig)
{
	static int i = 0;
	static char c;
	
	
}
  
int	main ()
{
	printf("%d\n" , getpid()); 
	signal(SIGUSR1, handler);
	signal(SIGUSR2, handler);
	pause();
}
