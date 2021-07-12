NAME	= libftprintf.a

SOURCES	= ${wildcard *.c}
OBJECTS	= ${SOURCES:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -rf

all: ${NAME}

${NAME}: ${OBJECTS}
	@$(MAKE) -C ./libft
	@${CC} ${OBJECTS} ${CFLAGS} ./libft/libft.a -o ${NAME}

clean:
	@$(MAKE) -C libft clean
	@${RM} ${OBJECTS}

fclean: clean
	@$(MAKE) -C libft fclean
	@${RM} ${NAME}

re: fclean all

.PHONY: clean fclean re all