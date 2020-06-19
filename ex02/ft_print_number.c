#include <unistd.h>

int ft_putchar(char c)
{
	write(1,&c,1);
	return (0);
}

void ft_print_number(void)
{
	int i = '0';
	while (i <= '9') {
	ft_putchar(i);
	i = i+1;
	}
}
int main ()
{
	ft_print_number();
	ft_putchar('\n');
	return (0);
}
