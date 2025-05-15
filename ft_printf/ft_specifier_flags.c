/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_specifier_flags.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 00:05:18 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/15 11:33:42 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_flags	*flags_init(void)
{
	t_flags	*flags_0;

	flags_0 = malloc(sizeof(t_flags));
	flags_0->spec = 0;
	flags_0->width = 0;
	flags_0->left = 0;
	flags_0->zero = 0;
	flags_0->star = 0;
	flags_0->precision = 0;
	flags_0->hash = 0;
	flags_0->space = 0;
	flags_0->plus = 0;
	return (flags_0);
}

t_flags	*ft_specifier_flags(char **format)
{
	t_flags	*flags;

	flags = flags_init();

	format = format + 1;
	return (flags);
}