#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "ft_printf.h"

/* BONUS: %S && %C */

// int main()
// {
// 	int		bytes_written = 0;
// 	int		ftbytes_written = 0;

// 	/*----------------- CHARACTER PRINT -----------------*/
// 	char	c1 = 'a';
// 	char	c2 = '%';

// 	printf("---------------------\nTEST: CHARACTER PRINT\n");
// 	printf("printf:\t\t");
// 	bytes_written = printf("|%5c|\t\t|%-5c|\n", c1, c2);
// 	printf("ft_printf:\t");
// 	fflush(stdout);
// 	ftbytes_written = ft_printf("|%5c|\t\t|%-5c|\n", c1, c2);
// 	printf("\nbytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);
// 	if (bytes_written != ftbytes_written)
// 		printf("WRONG BYTES PRINTED\n");


// 	/*----------------- STRING PRINT -----------------*/
// 	char	*s1 = "queen";
// 	char	*s2 = "kings";

// 	printf("\n---------------------\nTEST: STRING PRINT (NO FLAGS) \n");
// 	printf("printf:\t\t");
// 	bytes_written = printf("|%s|\t\t|%-s|\n", s1, s2);
// 	printf("ft_printf:\t");
// 	fflush(stdout);
// 	ftbytes_written = ft_printf("|%s|\t\t|%-s|\n", s1, s2);
// 	printf("\nbytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);
// 	if (bytes_written != ftbytes_written)
// 		printf("WRONG BYTES PRINTED\n");

// 	printf("\n---------------------\nTEST: STRING PRINT I (W > P > L) \n");
// 	printf("printf:\t\t");
// 	bytes_written = printf("|%12.10s|\t\t|%-12.10s|\n", s1, s2);
// 	printf("ft_printf:\t");
// 	fflush(stdout);
// 	ftbytes_written = ft_printf("|%12.10s|\t\t|%-12.10s|\n", s1, s2);
// 	printf("\nbytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);
// 	if (bytes_written != ftbytes_written)
// 		printf("WRONG BYTES PRINTED\n");

// 	printf("\n---------------------\nTEST: STRING PRINT II(P > W > L) \n");
// 	printf("printf:\t\t");
// 	bytes_written = printf("|%10.12s|\t\t|%-10.12s|\n", s1, s2);
// 	printf("ft_printf:\t");
// 	fflush(stdout);
// 	ftbytes_written = ft_printf("|%10.12s|\t\t|%-10.12s|\n", s1, s2);
// 	printf("\nbytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);
// 	if (bytes_written != ftbytes_written)
// 		printf("WRONG BYTES PRINTED\n");

// 	printf("\n---------------------\nTEST: STRING PRINT III(W > L > P) \n");
// 	printf("printf:\t\t");
// 	bytes_written = printf("|%10.2s|\t\t|%-10.2s|\n", s1, s2);
// 	printf("ft_printf:\t");
// 	fflush(stdout);
// 	ftbytes_written = ft_printf("|%10.2s|\t\t|%-10.2s|\n", s1, s2);
// 	printf("\nbytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);
// 	if (bytes_written != ftbytes_written)
// 		printf("WRONG BYTES PRINTED\n");

// 	printf("\n---------------------\nTEST: STRING PRINT IV (L > W > P) \n");
// 	printf("printf:\t\t");
// 	bytes_written = printf("|%3.2s|\t\t|%-3.2s|\n", s1, s2);
// 	printf("ft_printf:\t");
// 	fflush(stdout);
// 	ftbytes_written = ft_printf("|%3.2s|\t\t|%-3.2s|\n", s1, s2);
// 	printf("\nbytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);
// 	if (bytes_written != ftbytes_written)
// 		printf("WRONG BYTES PRINTED\n");

// 	printf("\n---------------------\nTEST: STRING PRINT V (L > P > W) \n");
// 	printf("printf:\t\t");
// 	bytes_written = printf("|%1.2s|\t\t|%-1.2s|\n", s1, s2);
// 	printf("ft_printf:\t");
// 	fflush(stdout);
// 	ftbytes_written = ft_printf("|%1.2s|\t\t|%-1.2s|\n", s1, s2);
// 	printf("\nbytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);
// 	if (bytes_written != ftbytes_written)
// 		printf("WRONG BYTES PRINTED\n");

// 	printf("\n---------------------\nTEST: STRING PRINT V (P > L > W) \n");
// 	printf("printf:\t\t");
// 	bytes_written = printf("|%2.12s|\t\t|%-2.12s|\n", s1, s2);
// 	printf("ft_printf:\t");
// 	fflush(stdout);
// 	ftbytes_written = ft_printf("|%2.12s|\t\t|%-2.12s|\n", s1, s2);
// 	printf("\nbytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);
// 	if (bytes_written != ftbytes_written)
// 		printf("WRONG BYTES PRINTED\n");

// 	printf("\n---------------------\nTEST: STRING PRINT VI (ZERO PRECISION) \n");
// 	printf("printf:\t\t");
// 	bytes_written = printf("|%2.0s|\t\t|%-2.0s|\n", s1, s2);
// 	printf("ft_printf:\t");
// 	fflush(stdout);
// 	ftbytes_written = ft_printf("|%2.0s|\t\t|%-2.0s|\n", s1, s2);
// 	printf("\nbytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);
// 	if (bytes_written != ftbytes_written)
// 		printf("WRONG BYTES PRINTED\n");
// }