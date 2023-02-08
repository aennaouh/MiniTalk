# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aennaouh <aennaouh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 01:13:07 by aennaouh          #+#    #+#              #
#    Updated: 2023/01/26 15:18:37 by aennaouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server
CLIENT = client
SERVER_BONUS= server_bonus
CLIENT_BONUS= client_bonus  
CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC= minitalk_utilis.c server.c
SRC1= minitalk_utilis.c client.c
SRC2= minitalk_utilis.c client_bonus.c
SRC3= minitalk_utilis.c server_bonus.c 

OBJ= ${SRC:.c=.o}
OBJ1= ${SRC1:.c=.o}
OBJ2= ${SRC2:.c=.o}
OBJ3= ${SRC3:.c=.o}

all : $(SERVER) $(CLIENT)


%.o : %.c minitalk.h 
	$(CC) $(CFLAGS) -c $<

$(SERVER) : $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(SERVER)

$(CLIENT) : $(OBJ1) 
		$(CC) $(CFLAGS) $(OBJ1) -o $(CLIENT)

bonus :  $(SERVER_BONUS) $(CLIENT_BONUS)
		 
$(CLIENT_BONUS) : $(OBJ2)
		$(CC) $(CFLAGS) $(OBJ2) -o $(CLIENT_BONUS)

$(SERVER_BONUS) : $(OBJ3)  
		$(CC) $(CFLAGS) $(OBJ3) -o $(SERVER_BONUS)   this obj3 its manes that the $< its the first depandsi   
 
clean : 
		rm -f $(OBJ) $(OBJ1) $(OBJ2) $(OBJ3)

fclean : clean
		rm -f $(SERVER) $(CLIENT) $(SERVER_BONUS) $(CLIENT_BONUS)
		
re : fclean all
re_bonus : fclean bonus

 