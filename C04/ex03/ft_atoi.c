#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_atoi(char *str)
{
    char nb[] = "123456789";;
    int i, res, neg;
    i = 0;
    res = 0;
    neg = 1; 
        while(str[i] < 14 && str[i] > 8 || str[i] == 32)
        {
            i++;
        }
        while(str[i] == '-' || str[i] == '+')
        {
            if(str[i] == '-')
                neg *= -1;
            i++;
        }
        while(str[i] >= '0' && str[i] <= '9')
        {
            res = res * 10 + (str[i] - 48);
            i++;
        }
    return(res * neg);
}

int main()
{
    char str[] = "  -323a3b";
    printf("%d", ft_atoi(str));
}