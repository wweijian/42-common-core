/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 00:00:00 by                   #+#    #+#             */
/*   Updated: 2025/05/17 19:18:37 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "ft_printf_tester.h"

int	main(void)
{
	ft_printf("\n===== FT_PRINTF COMPREHENSIVE TEST SUITE =====\n\n");
	
	// test_percent();
	// ft_printf("\n\n");
	
	test_char();
	ft_printf("\n\n");
	
	test_string();
	ft_printf("\n\n");
	
	test_pointer();
	ft_printf("\n\n");
	
	test_decimal();
	ft_printf("\n\n");
	
	test_unsigned();
	ft_printf("\n\n");
	
	test_hex();
	ft_printf("\n\n");
	
	ft_printf("\n\n===== TEST SUITE COMPLETE =====\n");
	return (0);
}

void	print_test_header(const char *test_name)
{
	ft_printf("\n\n==================================================\n");
	ft_printf("              TESTING %%%s FORMAT                ", test_name);
	ft_printf("\n==================================================\n");
}

void	print_test_subheader(const char *subheader)
{
	ft_printf("\n--------------------------------------------------\n");
	ft_printf(" %s ", subheader);
	ft_printf("\n--------------------------------------------------\n");
}