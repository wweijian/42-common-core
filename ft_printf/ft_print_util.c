/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_util.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 18:38:26 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/15 22:15:06 by wjhoe            ###   ########.fr       */
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

