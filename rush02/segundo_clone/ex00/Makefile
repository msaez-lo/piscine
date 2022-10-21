SRCS		= main.c analyze_dict.c read_file.c strlib.c strlib2.c

OBJS		= ${SRCS:.c=.o}

CFLAGS		= -Wall -Wextra -Werror

NAME		= a.out

CC			= cc

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

clean:	
			rm ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

