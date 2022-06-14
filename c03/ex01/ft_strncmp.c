#include <stdio.h>
#include <string.h>
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    i = 0;
    while(i < n-1)
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
    char s1[] = "totOYt";
    char s2[] = "totot";
    printf("%d", strncmp(s1, s2, 3));
    char s11[] = "totOyt";
    char s22[] = "totot";
    printf("\n%d", ft_strncmp(s11, s22, 3));
}