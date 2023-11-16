ALL_FUNCTIONS	= $(wildcard *.c)

BONUS_FUNCTIONS := ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

STD_FUNCTIONS := $(filter-out $(BONUS_FUNCTIONS),$(ALL_FUNCTIONS))

OBJS	= ${STD_FUNCTIONS:.c=.o}

INCDIR	= includes

NAME	= libft.a

LIBC	= ar rcs

LIBR	= ranlib 

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCDIR}

all: ${NAME} clean

${NAME}: ${OBJS}
		${LIBC} ${NAME} ${OBJS} 
		${LIBR} ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean 
		${RM} ${NAME}

re: fclean all

.PHONY:  all clean fclean re
