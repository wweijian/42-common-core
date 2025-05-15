/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 20:25:05 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/14 20:57:27 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(unsigned long long ptr, t_flags flags)
{
	int	count;

	count = hex_len(ptr) + write (1, "0x", 2);
	write_hex(ptr, 'x');
	return (count);
	(void) flags;
}