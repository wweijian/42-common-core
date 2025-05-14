/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:24:35 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/14 16:53:01 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -----DO NOT SUBMIT---- */

#include <stdio.h>
#include <string.h>
#include "ft_printf.h"

int main (void)
{
	int		bytes_written = 0;
	int		ftbytes_written = 0;
	char	*name1 = strdup("allan");
	char	*name2 = strdup("beth");

	printf("-----\nprintf:\n");
	bytes_written = printf("hello %s and %s.\n", name1, name2);
	printf("-----\nft_printf:\n");
	ftbytes_written = ft_printf("hello %s and %s.\n", name1, name2);
	printf("\nbytes:    %d\nftbytes:  %d\n", bytes_written, ftbytes_written);
}