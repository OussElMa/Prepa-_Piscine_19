#include <stdio.h>
#include <unistd.h>
#include <string.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_str_is_alpha(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))     
            return (0);
        i++;
    }
    return(1);
}

int main()
{
    char str[] = "VEFDGS132FDgrtegRBF";
    printf("%d", ft_str_is_alpha(str));
    return (0);
}