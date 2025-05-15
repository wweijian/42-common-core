/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:11:14 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/15 18:41:01 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str, t_flags flags)
{
	int		max_chars;
	int		count;

	count = 0;
	max_chars = ft_strlen(str);
	if (max_chars > flags.precision && flags.precision != -1)
		max_chars = flags.precision;
	if (flags.width < max_chars)
		count += write(1, str, max_chars);
	else
	{
		if (flags.left)
			count += write(1, str, max_chars);
		while (flags.width != max_chars)
		{
			count += write(1, " ", 1);
			flags.width--;
		}
		if (!flags.left)
			count += write(1, str, max_chars);
	}
	return (count);
}