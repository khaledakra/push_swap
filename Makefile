SRCS       = src/ft_split.c src/push_swap.c src/push.c  src/reverserotate.c src/rotate.c src/sort_utils.c src/sort.c src/stackint.c src/error_handle.c src/swap.c src/pushscommand.c src/pushsinit.c

OBJS        = ${SRCS:.c=.o}

NAME        = push_swap

CC          = cc
RM          = rm -f

CFLAGS      = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			${CC} ${CFLAGS} ${SRCS} -o ${NAME}

all: $(NAME)

clean:
	${RM} ${OBJS} ${B_OBJS}

fclean:	clean
		${RM} $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re