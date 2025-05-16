/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:38:26 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/16 09:55:48 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	max_print(int num1, int num2)
{
	if (num1 > num2)
		return (num1);
	return (num2);
}

int	count_digits(long num, t_flags flags)
{
	int	count;

	count = 0;
	if (num == 0 && flags.precision == 0)
		return (0);
	if (num == 0)
		return (1);
	if (num < 0)
		num *= -1;
	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

int	write_zero(int num_len, t_flags flags)
{
	int	count;

	count = 0;
	if (flags.precision == -1)
		return (count);
	while (flags.precision > num_len)
	{
		count += write(1, "0", 1);
		flags.precision--;
	}

	return (count);
}


int	write_padding(int len, t_flags flags)
{
	int	count;

	count = 0;
	if (flags.hash == 1)
	{
		flags.precision += 2;
		len += 2;
	}
	while (flags.width-- > max_print(flags.precision, len))
	{
		if (flags.zero)
			count += write(1, "0", 1);
		else
			count += write(1, " ", 1);
	}
	return (count);
}
