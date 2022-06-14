#include <stdio.h>
#include <unistd.h>
#include <string.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i, x;
    i = 0;
    x = 0;
    while(src[x])
      x++;
    while(i < n)
    {
      while(i < x && i != n)
      {
        dest[i] = src[i];
        i++;
      }
      while(i >= x)
      {
        dest[i] = ('\0');
        i++;
      }
    }
    return(dest);
}
int main()
{
    char dest[] = "fer";
    char src[] = "Plomano";
    printf("%s", strncpy(dest, src, 1));
    char dest1[] = "fer";
    char src1[] = "Plomano";
    printf("\n%s", ft_strncpy(dest1, src1, 1));
    return (0);
}