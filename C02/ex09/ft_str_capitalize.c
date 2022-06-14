#include <stdio.h>
#include <unistd.h>
#include <string.h>
char ft_strcapitalize(char *str)
{
    int i;
    i = 0;
    if(*str >= 'a' && *str <= 'z')
    {
      str[i] -= 32;
      i++;
    }
    while (str[i])
    {
        if (str[i] == 32 || str[i] == 43 || str[i] == 45)
        {
          i++;
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] -= 32;
                i++;
            }
        }
        i++;
    }
    return (str[10]);
}

int main()
{
    char str[] = "salut comment ca va? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(str);
    printf("%s", str);
    return (0);
}