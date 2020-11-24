# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrigora <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/12 09:11:52 by agrigora          #+#    #+#              #
#    Updated: 2020/11/12 09:11:53 by agrigora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
NAME = ft_cat
SRCS = main.c
OBJS = $(SRCS:.c=.o)
CC		= gcc

all: $(NAME)

%.o: %.c
	${CC} $(CFLAGS) -c $<

$(NAME): $(OBJS)
	${CC} $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
