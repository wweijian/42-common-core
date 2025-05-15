/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:33:29 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/15 16:07:50 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c, t_flags flags)
{
	int	count;

	count = 0;
	if (flags.width < 2)
		count += write(1, &c, 1);
	else
	{
		if (flags.left == 1)
		{
			count += write(1, &c, 1);
			while (flags.width-- > 1)
				count += write(1, " ", 1);
		}
		else
		{
			while (flags.width-- > 1)
				count += write(1, " ", 1);
			count += write(1, &c, 1);
		}
	}
	return (count);
}