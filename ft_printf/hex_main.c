#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

/* int main(void) {
    unsigned int x1 = 0;
    unsigned int x2 = 42;
    unsigned int x3 = 305441741; // 0x1234ABCD
    unsigned int x4 = UINT_MAX;

    int bytes, ftbytes;

    printf("\n===========================\n");
    printf("TEST: HEXADECIMAL %%x / %%X + FLAGS\n");
    printf("===========================\n");

    // 1. Basic lowercase
    printf("\n[1] Basic lowercase %%x\n");
    printf("printf:\t\t");
    bytes = printf("|%x|\n", x3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes = ft_printf("|%x|\n", x3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes, ftbytes);

    // 2. Basic uppercase
    printf("\n[2] Basic uppercase %%X\n");
    printf("printf:\t\t");
    bytes = printf("|%X|\n", x3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes = ft_printf("|%X|\n", x3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes, ftbytes);

    // 3. Alternate form #
    printf("\n[3] Alternate form (%%#x)\n");
    printf("printf:\t\t");
    bytes = printf("|%#x|\n", x3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes = ft_printf("|%#x|\n", x3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes, ftbytes);

    // 4. Alternate form # with 0 value
    printf("\n[4] Alternate form, value = 0\n");
    printf("printf:\t\t");
    bytes = printf("|%#x|\n", x1);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes = ft_printf("|%#x|\n", x1);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes, ftbytes);

    // 5. Width
    printf("\n[5] Width (10)\n");
    printf("printf:\t\t");
    bytes = printf("|%10x|\n", x2);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes = ft_printf("|%10x|\n", x2);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes, ftbytes);

    // 6. Zero padding
    printf("\n[6] Zero padding (%%010x)\n");
    printf("printf:\t\t");
    bytes = printf("|%010x|\n", x2);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes = ft_printf("|%010x|\n", x2);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes, ftbytes);

    // 7. Width + precision
    printf("\n[7] Width + Precision (%%10.5x)\n");
    printf("printf:\t\t");
    bytes = printf("|%10.5x|\n", x2);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes = ft_printf("|%10.5x|\n", x2);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes, ftbytes);

    // 8. Left-align
    printf("\n[8] Left-align (%%-10x)\n");
    printf("printf:\t\t");
    bytes = printf("|%-10x|\n", x2);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes = ft_printf("|%-10x|\n", x2);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes, ftbytes);

    // 9. All flags combined: %#-10.5x
    printf("\n[9] All flags combined (%%#-10.5x)\n");
    printf("printf:\t\t");
    bytes = printf("|%-#10.5x|\n", x2);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes = ft_printf("|%-#10.5x|\n", x2);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes, ftbytes);

    // 10. Zero + # + width
    printf("\n[10] Zero + # + width (%%#010x)\n");
    printf("printf:\t\t");
    bytes = printf("|%#010x|\n", x2);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes = ft_printf("|%#010x|\n", x2);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes, ftbytes);

    // 11. Precision = 0, value = 0
    printf("\n[11] Precision = 0, value = 0 (%%.0x)\n");
    printf("printf:\t\t");
    bytes = printf("|%.0x|\n", x1);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes = ft_printf("|%.0x|\n", x1);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes, ftbytes);

    // 12. Width + Precision = 0, value = 0
    printf("\n[12] Width + Precision = 0, value = 0 (%%5.0x)\n");
    printf("printf:\t\t");
    bytes = printf("|%5.0x|\n", x1);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes = ft_printf("|%5.0x|\n", x1);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes, ftbytes);

    // 13. UINT_MAX
    printf("\n[13] UINT_MAX (%%x)\n");
    printf("printf:\t\t");
    bytes = printf("|%x|\n", x4);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes = ft_printf("|%x|\n", x4);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes, ftbytes);

    return 0;
}
 */