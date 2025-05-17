/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_percent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 00:00:00 by                   #+#    #+#             */
/*   Updated: 2025/05/17 19:37:55 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
#include "ft_printf_tester.h"

static void	test_basic_percent(void)
{
	print_test_subheader("Basic percent sign tests");
	
	ft_printf("Test 1: Simple percent: [%%]\n");
	ft_printf("Test 2: Double percent: [%%%%]\n");
	ft_printf("Test 3: Triple percent: [%%%%%%]\n");
	ft_printf("Test 4: Percent with text: [Hello %% World]\n");
	ft_printf("Test 5: Multiple percent: [%% %% %%]\n");
}

static void	test_percent_with_width(void)
{
	print_test_subheader("Percent with width");
	
	ft_printf("Test 1: Width 5: [%5%%]\n");
	ft_printf("Test 2: Width 10: [%10%%]\n");
	ft_printf("Test 3: Width 1: [%1%%]\n");
	ft_printf("Test 4: Width 0: [%0%%]\n");
}

static void	test_percent_with_flags(void)
{
	print_test_subheader("Percent with flags");
	
	// For % the only flags that should affect it are - and 0
	ft_printf("Test 1: With minus flag (left-align): [%-5%%]\n");
	ft_printf("Test 2: With zero flag: [%05%%]\n");
	ft_printf("Test 3: With zero and large width: [%020%%]\n");
	
	// These flags shouldn't affect % but should be tested
	ft_printf("Test 4: With plus flag: [%+5%%]\n");
	ft_printf("Test 5: With space flag: [% 5%%]\n");
	ft_printf("Test 6: With hash flag: [%#5%%]\n");
	
	// Combining flags
	ft_printf("Test 7: Zero + hash: [%0#5%%]\n");
	ft_printf("Test 8: Minus + zero (minus should take precedence): [%-05%%]\n");
	ft_printf("Test 9: All flags: [%-+0# 10%%]\n");
}

static void	test_percent_with_precision(void)
{
	print_test_subheader("Percent with precision");
	
	// Precision technically shouldn't affect % but let's test anyway
	ft_printf("Test 1: Precision 5: [%.5%%]\n");
	ft_printf("Test 2: Precision 0: [%.0%%]\n");
	ft_printf("Test 3: Width 10 + Precision 5: [%10.5%%]\n");
	ft_printf("Test 4: Width 5 + Precision 10: [%5.10%%]\n");
	ft_printf("Test 5: Width 10 + Precision 0: [%10.0%%]\n");
	
	// Precision with flags
	ft_printf("Test 6: Left-aligned + precision: [%-10.5%%]\n");
	ft_printf("Test 7: Zero flag + precision: [%010.5%%]\n");
}

static void	test_percent_edge_cases(void)
{
	print_test_subheader("Percent edge cases");
	
	ft_printf("Test 1: Negative width: [%-5%%]\n");
	ft_printf("Test 2: Huge width: [%50%%]\n");
	ft_printf("Test 3: Percent at end: [abc%%]\n");
	ft_printf("Test 4: Percent at start: [%%abc]\n");
	ft_printf("Test 5: Lone percent at end (invalid but should be handled): [abc%%");
	ft_printf("]\n");
}

void	test_percent(void)
{
	print_test_header("percent");
	
	test_basic_percent();
	test_percent_with_width();
	test_percent_with_flags();
	test_percent_with_precision();
	test_percent_edge_cases();
} */