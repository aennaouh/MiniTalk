/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 03:35:39 by aennaouh          #+#    #+#             */
/*   Updated: 2023/01/15 23:55:57 by aennaouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_putstr(char *s);
void	ft_putnbr(int n);
int		ft_atoi(const char *str);
void	ft_send(int pid, char c);
void	ft_msg(int sig);
void	handler(int sig, siginfo_t *c_pid, void *content);

#endif