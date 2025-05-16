/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjhoe <wjhoe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 11:32:24 by wjhoe             #+#    #+#             */
/*   Updated: 2025/05/16 13:27:29 by wjhoe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"


/* int main(void) {

	void *ptr1 = (void *)0;
    void *ptr2 = (void *)0x1234;
    void *ptr3 = (void *)ULONG_MAX;
    int x = 42;
    void *ptr4 = &x;

    int bytes, ftbytes;

    printf("\n===========================\n");
    printf("TEST: POINTER %%p\n");
    printf("===========================\n");

    // 1. NULL pointer
    printf("\n[1] NULL pointer\n");
    printf("printf:\t\t");
    bytes = printf("|%p|\n", ptr1);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes = ft_printf("|%p|\n", ptr1);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes, ftbytes);

    // 2. Small address
    printf("\n[2] Small address (0x1234)\n");
    printf("printf:\t\t");
    bytes = printf("|%p|\n", ptr2);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes = ft_printf("|%p|\n", ptr2);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes, ftbytes);

    // 3. Large address (ULONG_MAX)
    printf("\n[3] Large address (ULONG_MAX)\n");
    printf("printf:\t\t");
    bytes = printf("|%p|\n", ptr3);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes = ft_printf("|%p|\n", ptr3);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes, ftbytes);

    // 4. Actual variable address
    printf("\n[4] Address of local variable\n");
    printf("printf:\t\t");
    bytes = printf("|%p|\n", ptr4);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes = ft_printf("|%p|\n", ptr4);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes, ftbytes);

    // 5. Width applied (20)
    printf("\n[5] Width (%%20p)\n");
    printf("printf:\t\t");
    bytes = printf("|%20p|\n", ptr4);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes = ft_printf("|%20p|\n", ptr4);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes, ftbytes);

    // 6. Left align (%%-20p)
    printf("\n[6] Left align (%%-20p)\n");
    printf("printf:\t\t");
    bytes = printf("|%-20p|\n", ptr4);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes = ft_printf("|%-20p|\n", ptr4);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes, ftbytes);

    // 7. NULL with width
    printf("\n[7] NULL + width (%%20p)\n");
    printf("printf:\t\t");
    bytes = printf("|%20p|\n", ptr1);
    printf("ft_printf:\t");
    fflush(stdout);
    ftbytes = ft_printf("|%20p|\n", ptr1);
    printf("bytes:    %d\t\tftbytes:  %d\n", bytes, ftbytes);

    return 0;
}
 */