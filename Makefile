NAME            = libft.a

FILES           = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_toupper ft_tolower
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