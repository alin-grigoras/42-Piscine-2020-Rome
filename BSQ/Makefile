# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrigora <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/08 19:19:23 by agrigora          #+#    #+#              #
#    Updated: 2020/11/10 12:35:42 by bocal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= checks.c main.c str_ops.c check_input.c checks2.c error.c file_ops.c map_params.c standard_input.c giga_brain.c square_logic.c matrix_revolutions.c dont_look_inside.c
OBJS	= ${SRCS:.c=.o}
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra
NAME	= bsq

all		:	${NAME}

${NAME}	:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

clean	:
			rm -rf ${OBJS}

fclean	:	clean
			rm -f ${NAME}

re		:	fclean all

.PHONY	: all clean fclean re
