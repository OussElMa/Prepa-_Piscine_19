#include <stdio.h>
#include <string.h>
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
int ft_strncat(char *dest, char *src, unsigned int n)
{
    int i;
    unsigned int x;
    i = 0;
    x = 0;
    while(dest[i])
    {
        ft_putchar(dest[i]);
        i++;
    }
    while(x < n)
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
    char src[] = "totot";
    printf("%s\n", strncat(dest, src, 6));
    char dest1[14] = "jesuis";
    char src1[] = "totot";
    printf("\n%c", ft_strncat(dest1, src1, 6));
}