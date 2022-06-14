#include <stdio.h>
#include <unistd.h>
#include <string.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

char *ft_strcpy(char *dest, char *src)
{
    int i;
    i = 0;
    if (dest >= src)
    {
        while (src[i] != '\0')
        {
            dest[i] = src[i];
            i++;
        }
    }
    dest[i] = '\0';
    return (dest);
}

int main()
{
    char dest[] = "fe";
    char src[] = "Plouss";
    // printf("%s", strcpy(dest, src));
    printf("\n%s", ft_strcpy(dest, src));
    
    return (0);
}