/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:35:08 by aennaouh          #+#    #+#             */
/*   Updated: 2022/12/28 16:01:27 by aennaouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_send(int pid, char *Str){
	int i = 0;
	int j = 0;
	while(Str[i]){
		while(j < 8){
			if(Str[i] & 1)
				kill(pid,SIGUSR1);
			else
				kill(pid,SIGUSR2);
				Str[i] <<= 1;
			j++;
		}
		i++;
	}
}

int main (int ac, char **av)
{
	ft_send(atoi(av[1]) , av[2]);
}