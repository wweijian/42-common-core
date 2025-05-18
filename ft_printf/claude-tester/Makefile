# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/16 14:55:51 by wjhoe             #+#    #+#              #
#    Updated: 2025/05/18 10:57:24 by wjhoe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ${FTPRINTF_PATH}/output.txt
SRCS = test_char.c test_decimal.c test_hex.c test_percent.c \
		test_pointer.c test_string.c test_unsigned.c 
MAN_SRCS = test_mandatory.c
BON_SRCS = test_bonus.c
LIB = libftprintf.a
OBJS = printcompare
FTPRINTF_PATH = ..
FTPRINTF = ${FTPRINTF_PATH}/${LIB}

CC = cc 
RM = rm -fr

all:
		@echo type make mandatory or make bonus to test the respective functions
		@echo \n

bonus: fclean ${NAME}
		@make clean

${NAME}: ${FTPRINTF}
		${CC} ${SRCS} -L. ${FTPRINTF} -o ${OBJS}
		./${OBJS} > ${NAME}

${FTPRINTF}:
		make -C ${FTPRINTF_PATH} all

open: ${NAME}
		open ${NAME}

clean:
		${RM} ${OBJS}
		make -C ${FTPRINTF_PATH} clean

fclean: clean
		${RM} ${NAME}
		make -C ${FTPRINTF_PATH} fclean

re: fclean all

.PHONY: all clean fclean re bonus open