#include <unistd.h>

int  ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

void ft_print_numbers(void)
{	
	int numero = '0';
	while ( numero <= '9')
	{
		ft_putchar(numero);
		numero++;
	}
}


