#include <unistd.h>

int  ft_putchar(char c)
{
	write(1, &c, 1);
	return(c);
}

void	ft_print_alphabet(void)
{
	int	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}

