#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "ft_printf.h"

/* BONUS: %U */

int main(void) 
{
    unsigned int u1 = UINT_MAX;
    unsigned int u2 = 0;
    unsigned int u3 = 42;

    int bytes_written, ftbytes_written;

    printf("\n============================\n");
    printf("TEST: UNSIGNED INTEGER CASES\n");
    printf("============================\n");

    // 1. Basic test
    printf("\n[1] Basic Test\n");
    printf("printf:\t\t");
    bytes_written = printf("|%u|\n", u3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%u|\n", u3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 2. Field Width
    printf("\n[2] Field Width\n");
    printf("printf:\t\t");
    bytes_written = printf("|%10u|\n", u3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%10u|\n", u3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 3. Precision
    printf("\n[3] Precision\n");
    printf("printf:\t\t");
    bytes_written = printf("|%.5u|\n", u3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%.5u|\n", u3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 4. Width + Precision
    printf("\n[4] Width + Precision\n");
    printf("printf:\t\t");
    bytes_written = printf("|%10.5u|\n", u3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%10.5u|\n", u3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 5. Left alignment
    printf("\n[5] Left aligned\n");
    printf("printf:\t\t");
    bytes_written = printf("|%-10u|\n", u3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%-10u|\n", u3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 6. Zero padding
    printf("\n[6] Zero padding\n");
    printf("printf:\t\t");
    bytes_written = printf("|%010u|\n", u3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%010u|\n", u3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 7. Zero + Precision (zero ignored)
    printf("\n[7] Zero flag + precision\n");
    printf("printf:\t\t");
    bytes_written = printf("|%010.5u|\n", u3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%010.5u|\n", u3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 8. Precision = 0, value = 0
    printf("\n[8] Precision = 0, value = 0\n");
    printf("printf:\t\t");
    bytes_written = printf("|%.0u|\n", u2);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%.0u|\n", u2);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 9. Width + Precision = 0, value = 0
    printf("\n[9] Width + Precision = 0, value = 0\n");
    printf("printf:\t\t");
    bytes_written = printf("|%5.0u|\n", u2);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%5.0u|\n", u2);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 10. Max unsigned int
    printf("\n[10] Max unsigned int\n");
    printf("printf:\t\t");
    bytes_written = printf("|%u|\n", u1);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%u|\n", u1);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    // 11. Width + Precision + Left align
    printf("\n[11] Width + Precision + Left align\n");
    printf("printf:\t\t");
    bytes_written = printf("|%-10.5u|\n", u3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes_written = ft_printf("|%-10.5u|\n", u3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes_written, ftbytes_written);

    return 0;
}

