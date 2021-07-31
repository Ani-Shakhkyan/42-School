NAME	= libftprintf.a

SOURCES	= ${shell find . -name "*.c" -not -name "main.c"}
OBJECTS	= ${SOURCES:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar csr
RM		= rm -rf

all: ${NAME}

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME) : ${OBJECTS}
	@$(MAKE) -C ./libft
	${AR} ${NAME} ${OBJECTS} ./libft/libft.a

clean:
	@$(MAKE) -C libft clean
	@${RM} ${OBJECTS}

fclean: clean
	@$(MAKE) -C libft fclean
	@${RM} ${NAME}

re: fclean all

compile: ${NAME}
	@gcc libftprintf.a main.c && ./a.out | cat -e

.PHONY: clean fclean re all