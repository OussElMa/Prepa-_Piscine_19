#include <stdio.h>
#include <unistd.h>
#include <string.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
char ft_strcat(char *dest, char *src)
{
    int i, x;
    i = 0;
    x = 0;
    while(dest[i])
    {
        ft_putchar(dest[i]);
        i++;
    }
    while(src[x] != '\0')
    {
        dest[i] += src[x];
        ft_putchar(dest[i]);
        i++;
        x++;
    }
    dest[i + x] = '\0';
    return(dest[i]);
}

int main()
{
    char dest[14] = "jesuis";
    char src[] = "toto";
    printf("%s\n", strcat(dest, src));
    char dest1[14] = "jesuis";
    char src1[] = "toto";
    printf("\n%c", ft_strcat(dest1, src1));
}