/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:33:29 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/14 16:53:24 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *string, t_flags flags)
{
	int	count;

	count = write(1, string, ft_strlen(string));
	(void) flags;

	return (count);
}