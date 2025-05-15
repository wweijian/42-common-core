/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:33:29 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/14 19:35:33 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_num(int num, t_flags flags)
{
	int		count;
	char	*str;

	str = ft_itoa(num);
	count = write(1, str, ft_strlen(str));
	(void) flags;

	return (count);
}