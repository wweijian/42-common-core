/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 00:00:00 by                   #+#    #+#             */
/*   Updated: 2025/05/17 19:26:20 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_tester.h"

static void	test_basic_string(void)
{
	print_test_subheader("Basic string tests");
	
	printf("Test 1: Simple string: [%s]\n", "Hello");
	printf("Test 2: Empty string: [%s]\n", "");
	printf("Test 3: String with spaces: [%s]\n", "Hello World");
	printf("Test 4: String with special chars: [%s]\n", "Hello\tWorld\n");
	printf("Test 5: Multiple strings: [%s %s]\n", "Hello", "World");
	printf("Test 6: NULL string: [%s]\n", NULL);
}

static void	test_string_with_width(void)
{
	print_test_subheader("String with width");
	
	printf("Test 1: Width equal to length: [%5s]\n", "Hello");
	printf("Test 2: Width less than length: [%3s]\n", "Hello");
	printf("Test 3: Width more than length: [%10s]\n", "Hello");
	printf("Test 4: Width with empty string: [%5s]\n", "");
	printf("Test 5: Width with NULL: [%10s]\n", NULL);
	printf("Test 6: Width zero: [%0s]\n", "Hello");
}

static void	test_string_with_precision(void)
{
	print_test_subheader("String with precision");
	
	printf("Test 1: Precision less than length: [%.3s]\n", "Hello");
	printf("Test 2: Precision equal to length: [%.5s]\n", "Hello");
	printf("Test 3: Precision more than length: [%.10s]\n", "Hello");
	printf("Test 4: Precision zero: [%.0s]\n", "Hello");
	printf("Test 5: Precision with empty string: [%.5s]\n", "");
	printf("Test 6: Precision with NULL: [%.3s]\n", NULL);
}

static void	test_string_with_width_and_precision(void)
{
	print_test_subheader("String with width and precision");
	
	// Width > Precision > String length
	printf("Test 1: Width > Precision > Length: [%10.7s]\n", "Hello");
	
	// Width > String length > Precision
	printf("Test 2: Width > Length > Precision: [%10.3s]\n", "Hello");
	
	// String length > Width > Precision
	printf("Test 3: Length > Width > Precision: [%7.3s]\n", "HelloWorld");
	
	// String length > Precision > Width
	printf("Test 4: Length > Precision > Width: [%3.7s]\n", "HelloWorld");
	
	// Precision > Width > String length
	printf("Test 5: Precision > Width > Length: [%7.10s]\n", "Hello");
	
	// Precision > String length > Width
	printf("Test 6: Precision > Length > Width: [%3.10s]\n", "Hello");
	
	// Edge cases
	printf("Test 7: Width = Precision = Length: [%5.5s]\n", "Hello");
	printf("Test 8: Width = 0, Precision < Length: [%0.3s]\n", "Hello");
	printf("Test 9: Width > 0, Precision = 0: [%5.0s]\n", "Hello");
	printf("Test 10: NULL with width and precision: [%10.5s]\n", NULL);
}

static void	test_string_with_flags(void)
{
	print_test_subheader("String with flags");
	
	// For %s only the minus flag should have an effect
	printf("Test 1: Left-aligned: [%-10s]\n", "Hello");
	printf("Test 2: Left-aligned (width < length): [%-3s]\n", "Hello");
	
	// Zero flag doesn't apply to strings, but let's test
	printf("Test 3: With zero flag: [%010s]\n", "Hello");
	
	// Other flags don't apply but should be tested
	printf("Test 4: With plus flag: [%+10s]\n", "Hello");
	printf("Test 5: With space flag: [% 10s]\n", "Hello");
	printf("Test 6: With hash flag: [%#10s]\n", "Hello");
	
	// Combining flags
	printf("Test 7: Left-aligned with zero: [%-010s]\n", "Hello");
	printf("Test 8: All flags: [%-+0# 10s]\n", "Hello");
	
	// Flags with NULL
	printf("Test 9: NULL left-aligned: [%-10s]\n", NULL);
}

static void	test_string_with_flags_and_precision(void)
{
	print_test_subheader("String with flags and precision");
	
	// Left alignment with precision
	printf("Test 1: Left-aligned with precision: [%-10.3s]\n", "Hello");
	printf("Test 2: Left-aligned, precision > length: [%-10.7s]\n", "Hello");
	printf("Test 3: Left-aligned, width < length, with precision: [%-3.7s]\n", "Hello");
	
	// Other flag combinations
	printf("Test 4: Zero flag with precision: [%010.3s]\n", "Hello");
	printf("Test 5: Plus flag with precision: [%+10.3s]\n", "Hello");
	printf("Test 6: Space flag with precision: [% 10.3s]\n", "Hello");
	printf("Test 7: Hash flag with precision: [%#10.3s]\n", "Hello");
	
	// All flags with precision
	printf("Test 8: All flags with precision: [%-+0# 10.3s]\n", "Hello");
	
	// NULL cases
	printf("Test 9: NULL with flags and precision: [%-10.3s]\n", NULL);
}

static void	test_string_edge_cases(void)
{
	print_test_subheader("String edge cases");
	
	char *null_ptr = NULL;
	
	printf("Test 1: Very long string: [%s]\n", 
		"This is a very long string that exceeds the typical buffer size of most implementations");
	printf("Test 2: String with all special chars: [%s]\n", "\t\n\r\v\f\\\"\'");
	printf("Test 3: String with non-printable ASCII: [%s]\n", "\x01\x02\x03\x04\x05");
	printf("Test 4: NULL explicitly: [%s]\n", null_ptr);
	printf("Test 5: Huge width: [%100s]\n", "Hello");
	printf("Test 6: Huge precision: [%.100s]\n", "Hello");
	printf("Test 7: Zero width, zero precision: [%0.0s]\n", "Hello");
}

void	test_string(void)
{
	print_test_header("string");
	
	test_basic_string();
	test_string_with_width();
	test_string_with_precision();
	test_string_with_width_and_precision();
	test_string_with_flags();
	test_string_with_flags_and_precision();
	test_string_edge_cases();
}