/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:18:36 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/16 11:36:25 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft.h"

# if defined (__linux__)
#  define PTRNULL "(nil)"
# elif defined (__APPLE__)
#  define PTRNULL "0x0"
# endif

typedef struct s_flags
{
	int	width;
	int	left;
	int	zero;
	int	star;
	int	precision;
	int	hash;
	int	space;
	int	plus;
}		t_flags;

/* PRIMARY FUNCTION */
int		ft_printf(const char *format, ...);

/* SPECIFIER FUNCTIONS */
t_flags	*ft_specifier_flags(char **format);
int		ft_print_char(char c, t_flags flags);
int		ft_print_str(char *string, t_flags flags);
int		ft_print_num(int n, t_flags flags);
int		ft_print_hex(unsigned int n, char hex_case, t_flags flags);
int		ft_print_unsigned(unsigned int num, t_flags flags);
int		ft_print_ptr(unsigned long int num, t_flags flags);

/* ANCILLIARY FUNCTIONS */
int		hex_len(unsigned long int num, t_flags flags);
int		max_print(int num1, int num2);
int		count_digits(long num, t_flags flags);
int		write_zero(int num_len, t_flags flags);
int		write_padding(int len, t_flags flags);
int		write_xtoa(unsigned long num, int len, char hex_case);

# endif