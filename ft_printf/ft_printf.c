/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:13:14 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/13 13:14:16 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += print_str(va_arg(ap, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += print_num(va_arg(ap, int));
	else if (specifier == 'x')
		count += print_unsignedint(va_arg(ap, unsigned int));
	else if (specifier == 'x')
		count += ft_print_hex(va_arg(ap, unsigned int), 0);
	else if (specifier == 'X')
		count += ft_print_hex(va_arg(ap, unsigned int), 1);
	else if (specifier == 'u')
		count += ft_print_unsigned(va_arg(ap, unsigned int));
	else if (specifier == 'p')
		count += ft_print_ptr((unsigned long int)va_arg(ap, void *));
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	*ap;
	int		count;

	va_start(ap,format);
	count = 0;
	while (!*format)
	{
		if (*format == %)
			count += print_format(*(format + 1), ap);
		else
			count = write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}