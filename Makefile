NAME            = libft.a

FILES           = ft_isalpha
OBJS            := ${foreach source, ${FILES}, ${source}.o}

CC              = gcc
CFLAGS          = -Wall -Wextra -Werror -I.

RM              = rm -f 

${NAME} :       ${OBJS}
				ar rcs ${NAME} ${OBJS}

all :           ${NAME}

clean :
				${RM} ${OBJS}

fclean:         clean
				${RM} ${NAME}

re :            fclean all

.PHONY:         all clean fclean re