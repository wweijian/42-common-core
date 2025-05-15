/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 17:26:33 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/14 20:51:01 by wjhoe            ###   ########.fr       */
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

int	hex_len(unsigned long long num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num = num / 16;
		len++;
	}
	return (len);
}

int	ft_print_hex(unsigned int num, char hex_case, t_flags flags)
{
	int				count;

	count = hex_len(num);
	write_hex(num, hex_case);
	(void) flags;
	return (count);
}

