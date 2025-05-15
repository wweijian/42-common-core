/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:18:36 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/15 14:39:23 by wjhoe            ###   ########.fr       */
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

int		ft_printf(const char *format, ...);

/* SPECIFIER FUNCTIONS */
t_flags	*ft_specifier_flags(char **format);
int		ft_print_char(char c, t_flags flags);
int		ft_print_str(char *string, t_flags flags);
int		ft_print_num(int n, t_flags flags);
int		ft_print_hex(unsigned int n, char hex_case, t_flags flags);
int		ft_print_unsigned(unsigned int num, t_flags flags);
int		ft_print_ptr(unsigned long long ptr, t_flags flags);

/* ANCILLIARY FUNCTIONS */
int		hex_len(unsigned long long num);
void	write_hex(unsigned long long num, char hex_case);

# endif