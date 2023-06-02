NAME=rush02
SRCS=contrlnb.c ft_complementaire.c ft_data.c ft_print_number.c main.c nbr_in_tab.c
DEPS=header.h
OBJ=$(addprefix , ${SRCS:.c=.o})
CC=gcc
CFLAGS=-Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} $^ -o $@

.c.o:
	${CC} ${CFLAGS} -I. -c $< -o ${<:.c=.o}

fclean: clean
	rm -r ${NAME}

clean:
	rm -r ${OBJ}

re:	fclean all
