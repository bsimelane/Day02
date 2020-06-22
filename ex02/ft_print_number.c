#include <unistd.h>


void ft_print_number(void)
{
	int i = '0';
	while (i <= '9') {
	ft_putchar(i);
	i = i+1;
	}
}
