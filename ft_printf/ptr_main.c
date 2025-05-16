/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 11:32:24 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/16 11:35:45 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"
#include <string.h>

int main ()
{
	char	*str = strdup("walk");

	ft_printf("%p\n", str);
	printf("%p\n", str);
	
}