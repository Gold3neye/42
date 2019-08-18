
NAME	= rush-02

SRCS	= main.c srcs/*

LIB		= -L. -lft

OBJS	= ${SRCS:.c=.o}

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all:
			@make ${NAME}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS} ${LIB}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: 	all clean fclean re
