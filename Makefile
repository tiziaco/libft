# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tiacovel <tiacovel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 18:33:34 by tiacovel          #+#    #+#              #
#    Updated: 2023/11/20 18:39:59 by tiacovel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ALL_FUNCTIONS	= $(wildcard *.c)

BONUS_FUNCTIONS := ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

STD_FUNCTIONS := $(filter-out $(BONUS_FUNCTIONS),$(ALL_FUNCTIONS))

STD_OBJS	= ${STD_FUNCTIONS:.c=.o}

BONUS_OBJS = ${BONUS_FUNCTIONS:.c=.o}

# INCDIR	= includes

NAME	= libft.a

LIBC	= ar rcs

LIBR	= ranlib 

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME} clean

${NAME}: ${STD_OBJS}
		${LIBC} ${NAME} ${STD_OBJS} 
		${LIBR} ${NAME}

bonus:	$(STD_OBJS) $(BONUS_OBJS)
		${LIBC} $(NAME) $(STD_OBJS) $(BONUS_OBJS)
		${LIBR} ${NAME}

clean:
		${RM} ${STD_OBJS} $(BONUS_OBJS)

fclean: clean 
		${RM} ${NAME}

re: fclean all

.PHONY:  all clean fclean re bonus
