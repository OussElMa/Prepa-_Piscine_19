#include <stdio.h>
void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int main()
{
    int	*p;
	int	number;

	p = &number;
	ft_ft(p);
	printf("%d", number);
}