/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 02:06:07 by aennaouh          #+#    #+#             */
/*   Updated: 2022/12/26 02:41:29 by aennaouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	main(void)
{
	int pid;
	pid = fork();

	if (pid == 0)
	{
		printf("0 o 0 makynach\n");
	}
	else if (pid < 0)
	{
	printf("makynch dahk\n");
	return (1);
	}
	else 
{
	printf("makyn ghir rabha");
	return (0);
	}
	}