/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:11:14 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/17 10:47:06 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str, t_flags flags)
{
	int		max_chars;
	int		count;

	count = 0;
	flags.zero = 0;
	if (!str)
	{
		count += ft_print_null_str(flags);
		return (count);
	}
	max_chars = ft_strlen(str);
	if (max_chars > flags.precision && flags.precision != -1)
		max_chars = flags.precision;
	if (flags.left)
		count += write(1, str, max_chars);
	flags.precision = -1;
	count += write_padding(max_chars, flags);
	if (!flags.left)
		count += write(1, str, max_chars);
	return (count);
}