#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "ft_printf.h"

/* STANDARD PRINT */

// int main (void)
// {
// 	int		bytes_written = 0;
// 	int		ftbytes_written = 0;

// 	/*----------------- CHARACTER PRINT -----------------*/
// 	char	c1 = 'a';
// 	char	c2 = 'v';

// 	printf("---------------------\nTEST: CHARACTER PRINT\n");
// 	printf("printf:\t\t");
// 	bytes_written = printf("hello %c and %c.\n", c1, c2);
// 	printf("ft_printf:\t");
// 	fflush(stdout);
// 	ftbytes_written = ft_printf("hello %c and %c.\n", c1, c2);
// 	printf("\nbytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);
// 	if (bytes_written != ftbytes_written)
// 		printf("WRONG BYTES PRINTED\n");

// 	/*----------------- STRING PRINT -----------------*/
// 	char	*s1 = strdup("alan  ");
// 	char	*s2 = strdup("beth");

// 	printf("---------------------\nTEST: STRING PRINT\n");
// 	printf("printf:\t\t");
// 	bytes_written = printf("hello %s and %s.\n", s1, s2);
// 	printf("ft_printf:\t");
// 	fflush(stdout);
// 	ftbytes_written = ft_printf("hello %s and %s.\n", s1, s2);
// 	printf("\nbytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);
// 	if (bytes_written != ftbytes_written)
// 		printf("WRONG BYTES PRINTED\n");

// 	/*----------------- NUMBER PRINT -----------------*/
// 	int		n1 = INT_MIN;
// 	int		n2 = INT_MAX;

// 	printf("---------------------\nTEST: INTEGER PRINT(D)\n");
// 	printf("printf:\t\t");
// 	bytes_written = printf("hello %d and %d.\n", n1, n2);
// 	printf("ft_printf:\t");
// 	fflush(stdout);
// 	ftbytes_written = ft_printf("hello %d and %d.\n", n1, n2);
// 	printf("\nbytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);
// 	if (bytes_written != ftbytes_written)
// 		printf("WRONG BYTES PRINTED\n");

// 	printf("---------------------\nTEST: INTEGER PRINT(I)\n");
// 	printf("printf:\t\t");
// 	bytes_written = printf("hello %i and %i.\n", n1, n2);
// 	printf("ft_printf:\t");
// 	fflush(stdout);
// 	ftbytes_written = ft_printf("hello %i and %i.\n", n1, n2);
// 	printf("\nbytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);
// 	if (bytes_written != ftbytes_written)
// 		printf("WRONG BYTES PRINTED\n");

// 	printf("---------------------\nTEST: UNSIGNED PRINT(D)\n");
// 	printf("printf:\t\t");
// 	bytes_written = printf("hello %u and %u.\n", n1, n2);
// 	printf("ft_printf:\t");
// 	fflush(stdout);
// 	ftbytes_written = ft_printf("hello %u and %u.\n", n1, n2);
// 	printf("\nbytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);
// 	if (bytes_written != ftbytes_written)
// 		printf("WRONG BYTES PRINTED\n");

// 	/*----------------- HEX PRINT -----------------*/
// 	printf("---------------------\nTEST: HEXADECIMAL UPPER\n");
// 	printf("printf:\t\t");
// 	bytes_written = printf("hello %X and %X.\n", n1, n2);
// 	printf("ft_printf:\t");
// 	fflush(stdout);
// 	ftbytes_written = ft_printf("hello %X and %X.\n", n1, n2);
// 	printf("\nbytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);
// 	if (bytes_written != ftbytes_written)
// 		printf("WRONG BYTES PRINTED\n");

// 	printf("---------------------\nTEST: HEXADECIMAL LOWER\n");
// 	printf("printf:\t\t");
// 	bytes_written = printf("hello %x and %x.\n", n1, n2);
// 	printf("ft_printf:\t");
// 	fflush(stdout);
// 	ftbytes_written = ft_printf("hello %x and %x.\n", n1, n2);
// 	printf("\nbytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);
// 	if (bytes_written != ftbytes_written)
// 		printf("WRONG BYTES PRINTED\n");

// 	/*----------------- ADDRESS PRINT -----------------*/
// 	printf("---------------------\nTEST: ADDRESS PRINT\n");
// 	printf("printf:\t\t");
// 	bytes_written = printf("hello %p and %p.\n", s1, s2);
// 	printf("ft_printf:\t");
// 	fflush(stdout);
// 	ftbytes_written = ft_printf("hello %p and %p.\n", s1, s2);
// 	printf("\nbytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);
// 	if (bytes_written != ftbytes_written)
// 		printf("WRONG BYTES PRINTED\n");

// 	/*----------------- PERCENT PRINT -----------------*/
// 	printf("---------------------\nTEST: PERCENT PRINT\n");
// 	printf("printf:\t\t");
// 	bytes_written = printf("hello %% and %%.\n");
// 	printf("ft_printf:\t");
// 	fflush(stdout);
// 	ftbytes_written = ft_printf("hello %% and %%.\n");
// 	printf("\nbytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);
// 	if (bytes_written != ftbytes_written)
// 		printf("WRONG BYTES PRINTED\n");
// 	printf("\n");
// }
