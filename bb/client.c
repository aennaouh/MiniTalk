/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:35:08 by aennaouh          #+#    #+#             */
/*   Updated: 2022/12/28 17:40:51 by aennaouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_send(int pid, char c){
	// int i = 0;
	// int j = 8;
	// while(Str[i]){
	// // 	while(j < 8){
	// // 		if(Str[i] & 1)
	// // 			kill(pid,SIGUSR1);
	// // 		else
	// // 			kill(pid,SIGUSR2);
	// // 			Str[i] >>= 1;
	// // 		j++;
	// // 	}
	// // 	i++;
	// // 	usleep(500);
	// // }

	int i = 8;

	while(i == 1)
	{
		if (c >> i & 1)
			kill(pid,SIGUSR1);
		else
			kill(pid,SIGUSR2);
		i--;
		usleep(500);
	}
}

int main (int ac, char **av)

{
	int i = 0;

	while(av[2][i]){
		ft_send(atoi(av[1]), av[2][i]);
		i++;
	}
}