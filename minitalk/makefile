Name = minitalk.a
CC = cc 
FLAGS = -Wall -Wextra -Werror

SRC = server.c client.c

SERVER= server.c

CLIENT=client.c

OBJS = ${SRC:.c=.o}

all: server client

%.o: %.c
	${CC} ${FLAGS} -c $<

server: ${SERVER}
	${CC} ${FLAGS} $< -o server

client: ${CLIENT}
	${CC} ${FLAGS} $< -o client

clean:
	rm -f ${OBJS}

fclean:
	rm -f ${NAME}

re : fclean all 

