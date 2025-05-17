#include "ft_printf.h"
#include <string.h>
#include <limits.h>


int main ()
{
	// int	bytes_written;
	// int	ftbytes_written;
	
	printf(" |%-10d| \n", INT_MIN);
	ft_printf(" |%-10d| \n", INT_MIN);
}

// TEST(5, print(" %.s ", "-"));

// TEST(52, print(" %-10d ", INT_MIN));