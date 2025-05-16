/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 16:11:14 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/16 14:12:15 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str, t_flags flags)
{
	int		max_chars;
	int		count;

	count = 0;
	flags.zero = 0;
	max_chars = ft_strlen(str);
	if (!str)
	{
		count += ft_print_null_str(flags);
		return (count);
	}
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