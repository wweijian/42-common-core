/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:34:08 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/16 09:49:22 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	unsigned takes the following flags: 0 - 

	0:
	if precision is given, 0 is ignored

*/

#include "ft_printf.h"

static char	*ft_utoa(unsigned int num, t_flags flags)
{
	char	*str;
	int		len;

	len = count_digits(num, flags);
	str = malloc(sizeof(*str) * (len + 1));
	while (len > 0)
	{
		str[len - 1] = num % 10 + '0';
		num = num / 10;
		len--;
	}
	return (str);
}

static int	write_num(char *str, int num_len, t_flags flags)
{
	int	count;

	count = 0;
	while (flags.precision-- > num_len)
		count += write(1, "0", 1);
	count += write (1, str, num_len);

	return (count);
}

int	ft_print_unsigned(unsigned int num, t_flags flags)
{
	char	*str;
	int		num_len;
	int		count;

	count = 0;
	str = ft_utoa(num, flags);
	num_len = count_digits(num, flags);
	if (flags.left)
		count += write_num(str, num_len, flags);
	while (flags.width-- > max_print(flags.precision, num_len))
	{
		if (flags.zero)
			count += write(1, "0", 1);
		else
			count += write(1, " ", 1);
	}
	if (!flags.left)
		count += write_num(str, num_len, flags);
	free (str);
	return (count);
}
