/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 19:34:08 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/14 20:05:07 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	unsigned_len(unsigned int num)
{
	int	count;

	count = 0;

	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

static char	*ft_utoa(unsigned int num)
{
	char	*str;
	int		len; 

	len = unsigned_len(num);
	str = malloc(sizeof(*str) * (len + 1));
	while(len > 0)
	{
		str[len - 1] = num % 10 + '0';
		num = num / 10;
		len--;
	}
	return (str);
}

int	ft_print_unsigned(unsigned int num, t_flags flags)
{
	char	*str;
	int		count;

	str = ft_utoa(num);
	count = unsigned_len(num);
	write(1, str, count);
	free (str);
	return (count);
	(void) flags;
}