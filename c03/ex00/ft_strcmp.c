#include <stdio.h>
#include <string.h>
int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    while(s1[i])
    {
        if(s1[i] == s2[i])
        {
            i++;
        }
        else
            break;
    }
    return(s1[i] - s2[i]);
}
int main()
{
    char s1[] = "ecRo";
    char s2[] = "toto";
    printf("%d", strcmp(s1, s2));
    printf("\n%d", ft_strcmp(s1, s2));
}