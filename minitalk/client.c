/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 18:35:08 by aennaouh          #+#    #+#             */
/*   Updated: 2022/12/28 23:28:20 by aennaouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int		sign;
	int		i;
	size_t	res;

	res = 0;
	sign = 1;
	i = 0;
	while ((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + str[i] - '0';
		i++;
	}
	return (sign * res);
}

void ft_send(int pid, char c)

{
	
	int i = 7;

	while(i >= 0)
	{
		if ((c >> i) & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		i--;
		usleep(500);
	}
}

void	ft_msg(int pid)
{
	write(1, "msg sent", 9);
	(void)pid;
}

void	handler(int sig){
		if(sig == SIGUSR1)
			write(1,"hjdf\n",5);
		else
			return ;
}

int main (int ac, char **av)

{
	int i = 0;
	while(av[2][i]){
		ft_send(atoi(av[1]), av[2][i]);
		i++;
	}
	signal(SIGUSR1, handler);
	printf("%d",getpid());
	(void)ac;
}