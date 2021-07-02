#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	numbers[3] = {'0', '0', '0'};

	while (numbers[0] <= '9')
	{
		if ((numbers[0] < numbers[1]) && (numbers[1] < numbers[2]))
		{
			ft_putchar(numbers[0]);
			ft_putchar(numbers[1]);
			ft_putchar(numbers[2]);
			if (numbers[0] != '7'){
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		if (numbers[2]++ >= '9')
		{
			numbers[2] = '0';
			numbers[1]++;
		}
		if (numbers[1] == ':' )
		{
			numbers[1] = '0';
			numbers[0]++;
		}
	}
}
