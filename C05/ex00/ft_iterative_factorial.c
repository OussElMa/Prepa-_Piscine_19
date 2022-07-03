#include <stdio.h>
int ft_iterative_factorial(int nb)
{
    int result;
    result = 1;
    
    if (nb < 0)
		return (0);
    while(nb)
        result *= nb--; 
    return(result);
}

int main()
{
    int nb = 0;
    printf("%d", ft_iterative_factorial(nb));
}