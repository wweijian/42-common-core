/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signed_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:24:35 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/16 13:31:41 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -----DO NOT SUBMIT---- */

#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "ft_printf.h"
/* 
int main(void) {
    int i1 = INT_MAX;
    int i2 = INT_MIN;
    int i3 = 42;
    int i4 = -42;
    int i5 = 0;

    int bytes_written, ftbytes_written;

    printf("\n===========================\n");
    printf("TEST: SIGNED INTEGER %%i + FLAGS\n");
    printf("===========================\n");

    // 1. Basic positive
    printf("\n[1] Basic positive\n");
    printf("printf:\t\t");
    bytes_written = printf("|%i|\n", i3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%i|\n", i3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 2. Basic negative
    printf("\n[2] Basic negative\n");
    printf("printf:\t\t");
    bytes_written = printf("|%i|\n", i4);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%i|\n", i4);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 3. Field width
    printf("\n[3] Field width\n");
    printf("printf:\t\t");
    bytes_written = printf("|%10i|\n", i3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%10i|\n", i3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 4. Precision
    printf("\n[4] Precision\n");
    printf("printf:\t\t");
    bytes_written = printf("|%.5i|\n", i3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%.5i|\n", i3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 5. Width + Precision
    printf("\n[5] Width + Precision\n");
    printf("printf:\t\t");
    bytes_written = printf("|%10.5i|\n", i3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%10.5i|\n", i3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 6. Left alignment
    printf("\n[6] Left aligned\n");
    printf("printf:\t\t");
    bytes_written = printf("|%-10i|\n", i3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%-10i|\n", i3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 7. Zero padding
    printf("\n[7] Zero padding\n");
    printf("printf:\t\t");
    bytes_written = printf("|%010i|\n", i3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%010i|\n", i3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 8. Zero + Precision (zero ignored)
    printf("\n[8] Zero + Precision\n");
    printf("printf:\t\t");
    bytes_written = printf("|%010.5i|\n", i3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%010.5i|\n", i3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 9. Precision = 0, value = 0
    printf("\n[9] Precision = 0, value = 0\n");
    printf("printf:\t\t");
    bytes_written = printf("|%.0i|\n", i5);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%.0i|\n", i5);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 10. Width + Precision = 0, value = 0
    printf("\n[10] Width + Precision = 0, value = 0\n");
    printf("printf:\t\t");
    bytes_written = printf("|%5.0i|\n", i5);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%5.0i|\n", i5);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 11. INT_MAX
    printf("\n[11] INT_MAX\n");
    printf("printf:\t\t");
    bytes_written = printf("|%i|\n", i1);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%i|\n", i1);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 12. INT_MIN
    printf("\n[12] INT_MIN\n");
    printf("printf:\t\t");
    bytes_written = printf("|%i|\n", i2);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%i|\n", i2);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 13. Width + Precision + Left align
    printf("\n[13] Width + Precision + Left align\n");
    printf("printf:\t\t");
    bytes_written = printf("|%-10.5i|\n", i4);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%-10.5i|\n", i4);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 14. Space flag (positive)
    printf("\n[14] Space flag (positive)\n");
    printf("printf:\t\t");
    bytes_written = printf("|% i|\n", i3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|% i|\n", i3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 15. Space flag (negative)
    printf("\n[15] Space flag (negative)\n");
    printf("printf:\t\t");
    bytes_written = printf("|% i|\n", i4);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|% i|\n", i4);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 16. Plus flag (positive)
    printf("\n[16] Plus flag (positive)\n");
    printf("printf:\t\t");
    bytes_written = printf("|%+i|\n", i3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%+i|\n", i3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 17. Plus flag (negative)
    printf("\n[17] Plus flag (negative)\n");
    printf("printf:\t\t");
    bytes_written = printf("|%+i|\n", i4);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%+i|\n", i4);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    return 0;
} */