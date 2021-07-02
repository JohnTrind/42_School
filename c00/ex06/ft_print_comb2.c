#include <unistd.h>
int  ft_putchar(char c)
{
	write(1, &c, 1);
	return(c);
}
void	 ft_print_comb(void)
{
	int numb1 = '0' ;
	int numb2 = '0' ;
	int numb3 = '0' ;
	int numb4 = '0' ;
	int vir = ',';
	int  espa = ' ' ;
	while(numb1 <= '9'){
		while(numb2 <= '8'){
			while(numb3 <='9'){
				while(numb4 <='9'){
					ft_putchar(numb1);
					ft_putchar(numb2);
					ft_putchar(espa);
					ft_putchar(numb3);
					ft_putchar(numb4);
					ft_putchar(vir);
					ft_putchar(espa);
					numb4++;
				}
				numb3++;
				numb4 = '0';
			}
			numb2++;
			numb3 = '0';
			numb4 = '0';
		}
		numb1++;
		numb2 = '0';
		numb3 = '0';
		numb4 = '0';
	}
}
