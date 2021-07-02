#include <unistd.h>

int  ft_putchar(char c)
{
	write(1, &c, 1);
	return(c);
}

void	ft_print_reverse_alphabet(void)
{
	int	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
}
