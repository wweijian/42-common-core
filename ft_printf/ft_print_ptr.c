/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:25:05 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/16 11:36:41 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* int	ft_print_ptr(unsigned long long ptr, t_flags flags)
{
	int	count;

	count = hex_len(ptr, flags) + write (1, "0x", 2);
	write_hex(ptr, 'x');
	return (count);
	(void) flags;
} */

static int	write_address(unsigned int num, int len)
{
	int		count;

	count = 0;
	count += write(1, "0x", 2);
	count += write_xtoa(num, len, 'x');
	return (count);
}

int	ft_print_ptr(unsigned long int num, t_flags flags)
{
	int		count;
	int		len;

	count = 0;
	flags.zero = 0;
	len = hex_len(num, flags);
	if (flags.left)
		count += write_address(num, len);
	count += write_padding(len, flags);
	if (!flags.left)
		count += write_address(num, len);
	return (count);
}

