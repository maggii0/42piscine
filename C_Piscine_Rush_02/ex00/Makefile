# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bepoca <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/20 13:30:24 by bepoca            #+#    #+#              #
#    Updated: 2026/06/20 13:44:06 by bepoca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= rush-02
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
SRCS	= src/main.c src/utils.c
OBJS	= ${SRCS:.c=.o}
RM	= rm -f

all: ${NAME}
${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
