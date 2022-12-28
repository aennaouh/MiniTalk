Name = minitalk.a
CC = cc 
FLAGS = -Wall -Wextra -Werror

SRC= server.c \
client.c \

OBJS = ${SRC:.c=.o}

all: $(NAME)

%.o %.c minitalk.h
	${CC} ${FLAGS} -c $< 

$(NAME): ${OBJS}
ar -rc ${NAME} ${OBJS}

clean:
rm -f ${OBJS}
 fclean:
 rm -f ${NAME}

re : fclean all 

