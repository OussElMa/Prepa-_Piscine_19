#include <stdio.h>
#include <unistd.h>
#include <string.h>

// char *ft_strstr(char *str, char *tofind)
// {
//     int i, x;
//     while (str[i] != '\0')
//     {
//         if (str[i] == tofind[x])
//         {
//             x++;
//         }    
//     }
//     return(&str[i]);
// }
char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
int main()
{
    // char str[14] = "jesuistotoonn";
    // char tofind[] = "toto";
    // printf("%s\n", strstr(str, tofind));
    char str1[14] = "jesuis";
    char tofind1[] = "toto";
    printf("\n%s", ft_strstr(str1, tofind1));
}