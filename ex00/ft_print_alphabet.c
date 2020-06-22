#include <unistd.h>

void ft_print_alphabet (void)
{
	char letter = 'a';
	while (letter <= 'z' ){
		ft_putchar (letter);
		letter = letter + 1;
}

