/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:13:14 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/16 14:16:40 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	print_arg(char **format, va_list args)
{
	t_flags	*flags;

	(*format)++;
	flags = ft_specifier_flags(format);
	if (**format == 'c')
		return (ft_print_char(va_arg(args, int), *flags));
	else if (**format == 's')
		return (ft_print_str(va_arg(args, char *), *flags));
	else if (**format == 'd' || **format == 'i')
		return (ft_print_num(va_arg(args, int), *flags));
	else if (**format == 'x' || **format == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), **format, *flags));
	else if (**format == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int), *flags));
	else if (**format == 'p')
		return (ft_print_ptr((unsigned long int)va_arg(args, void *), *flags));
	else
		return (write(1, *format, 1));
	free(flags);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	char	*format_dup;
	char	*format_dup_start;

	if (!format || *format == '\0')
		return (0);
	count = 0;
	format_dup = ft_strdup(format);
	format_dup_start = format_dup;
	va_start(args, format);
	while (*format_dup)
	{
		if (*format_dup == '%')
			count += print_arg(&format_dup, args);
		else
			count += write(1, format_dup, 1);
		format_dup++;
	}
	va_end(args);
	free(format_dup_start);
	return (count);
}