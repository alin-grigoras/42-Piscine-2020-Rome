# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrigora <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/08 18:35:14 by agrigora          #+#    #+#              #
#    Updated: 2020/11/08 18:35:21 by agrigora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_YELLOW_B=\033[0;33m
C_RED_B=\033[0;31m
C_GREEN_B=\033[0;32m
C_WHITE=\033[0;97m
C_RESET=\033[0;39m

SRCS	= ./srcs/ft_array_extend.c ./srcs/ft_atoi.c ./srcs/ft_atoi_strict.c ./srcs/ft_file_utils.c ./srcs/ft_is.c ./srcs/ft_itow.c ./srcs/ft_number_dictionary.c ./srcs/ft_number_dictionary_io.c ./srcs/ft_number_dictionary_sort.c ./srcs/ft_number_dictionary_sort2.c ./srcs/ft_split.c ./srcs/ft_str_copy.c ./srcs/ft_str_duplicate.c ./srcs/ft_str_join.c ./srcs/ft_str_length.c ./srcs/ft_str_write.c ./srcs/main.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= rush-02
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

run :
	./${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

norm :
	@echo "$(C_YELLOW_B)" ;
	Norminette -R CheckForbiddenSourceHeader */*.c
	@echo "$(C_RESET)$(C_GREEN_B)" ;
	Norminette -R CheckDefine */*.h

find_sources :
	find srcs -type f -name "*.c" | xargs -I{} echo ./{} | tr '\n' ' '

re : fclean all

test : re
	@echo "\n";
	@echo "[$(C_YELLOW_B)TESTING$(C_RESET)] $(C_WHITE)Number: 42$(C_RESET)" ;
	@./${NAME} 42 | cat -e || true ;
	@##
	@echo "[$(C_YELLOW_B)TESTING$(C_RESET)] $(C_WHITE)Number: 0$(C_RESET)" ;
	@./${NAME} 0 | cat -e || true ;
	@##
	@echo "[$(C_RED_B)TESTING$(C_RESET)] $(C_WHITE)Number: 10.4$(C_RESET)" ;
	@./${NAME} 10.4 | cat -e || true ;
	@##
	@echo "[$(C_YELLOW_B)TESTING$(C_RESET)] $(C_WHITE)Number: 100000$(C_RESET)" ;
	@./${NAME} 100000 | cat -e || true ;
	@##
	@echo "[$(C_YELLOW_B)TESTING$(C_RESET)] $(C_WHITE)Number: 20, language: $(C_GREEN_B)WITH_CUSTOM$(C_GREEN_B)" ;
	@./${NAME} numbers_with_custom.dict 20 | cat -e || true ;
	@echo "$(C_RESET)" ;
	@##
	make fclean

.PHONY: all clean fclean re .c.o test
