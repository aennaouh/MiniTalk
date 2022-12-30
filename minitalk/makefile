# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/29 19:47:04 by aennaouh          #+#    #+#              #
#    Updated: 2022/12/30 01:31:52 by aennaouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MINITALK_H

CC = cc

FLAGS = -Wall -Wextra -Werror

all : ft_printf/libftprintf.a server client

ft_printf/libftprintf.a : 
	make -C ft_printf
	
server : server.c minitalk.h
	$(CC) $(FLAGS) ft_printf/libftprintf.a server.c -o server 
	 
client : client.c minitalk.h
	$(CC) $(FLAGS) ft_printf/libftprintf.a client.c -o client

bonus : ft_printf/libftprintf.a client_bonus server_bonus

server_bonus : server_bonus.c minitalk.h
	$(CC) $(FLAGS) ft_printf/libftprintf.a server_bonus.c -o server_bonus
	
client_bonus : client_bonus.c minitalk.h
	$(CC) $(FLAGS) ft_printf/libftprintf.a client_bonus.c -o client_bonus
 
clean :
	rm -f server client server_bonus client_bonus

fclean : clean
	make fclean -C ft_printf

re : fclean all bonus

.PHONY : all fclean clean re

