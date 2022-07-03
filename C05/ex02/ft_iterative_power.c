#include <stdio.h>
int ft_iterative_power(int nb, int power)
{
    int i, result;
    i = 1;
    result = 1;
    while(i <= power)
    {
        result *= nb;
        i++;
    }
    return(result);
}
int main()
{
    int nb = 5;
    int power = 3;
    printf("%d", ft_iterative_power(nb, power));
}