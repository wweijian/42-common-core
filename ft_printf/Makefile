# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/16 14:55:51 by wjhoe             #+#    #+#              #
#    Updated: 2025/05/17 11:14:21 by wjhoe            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_print_null.c ft_print_util.c ft_print_char.c ft_print_num.c ft_specifier_flags.c \
	ft_printf.c ft_print_ptr.c ft_print_str.c ft_print_hex.c ft_print_unsigned.c

OBJS = ${SRCS:.c=.o}
LIBFT_PATH = ./libft
LIBFT = ${LIBFT_PATH}/libft.a

AR = ar rcs
CC = cc 
CFLAGS = -Wall -Wextra -Werror
RM = rm -fr

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${LIBFT} ${OBJS}
		cp ${LIBFT} ${NAME}
		${AR} ${NAME} ${OBJS}

bonus: all

${LIBFT}:
		make -C ${LIBFT_PATH} all

clean:
		${RM} ${OBJS}
		make -C ${LIBFT_PATH} clean

fclean: clean
		${RM} ${NAME}
		make -C ${LIBFT_PATH} fclean

test: all

re: fclean all

.PHONY: all clean fclean re bonus