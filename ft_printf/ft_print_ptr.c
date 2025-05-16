/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:25:05 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/16 09:32:38 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	write_hex(unsigned long long num, char hex_case)
{
	char			*hex_base;

	hex_base = "0123456789ABCDEF";
	if (hex_case == 'x')
		hex_base = "0123456789abcdef";
	if (num > 16)
	{
		write_hex(num / 16, hex_case);
		write_hex(num % 16, hex_case);
	}
	else
		write (1, &hex_base[num], 1);
}

int	ft_print_ptr(unsigned long long ptr, t_flags flags)
{
	int	count;

	count = hex_len(ptr, flags) + write (1, "0x", 2);
	write_hex(ptr, 'x');
	return (count);
	(void) flags;
}