
#include <stdio.h>


void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;

}

int		main(void)
{
	int a, b, div, mod;
	div = 0;
	mod = 0;
	a = 30;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("div: %d\nmod: %d", div, mod);
}