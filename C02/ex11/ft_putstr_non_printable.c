#include <stdio.h>
#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
// void ft_putstr_non_printable(char *str)
// {
//     int i;
//     i = 0;
//     char hex[] = "123456789ABCDEF";
//     while (str[i])
//     {
//         if(str[i] < 32 && str[i] >= 0)
//         {
//             if(str[i] < 16)
//             {
//                 str[i] = hex[i] / 16;
//                 str[i] = hex[i] % 16;
//                 ft_putchar(str[i]);
//                 i++;
//             }
//             i++;
//         }
//         else
//         {
//             printf("%c", str[i]);
//             i++;
//         }
//     }
// }
static void	ft_print_hexa(char np, char *hex)
{
	if (np > 16)
	{
		ft_print_hexa(np / 16, hex);
		ft_print_hexa(np % 16, hex);
	}
	else
		ft_putchar(hex[np]);
}
void		ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 && str[i] >= 0) || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_print_hexa(str[i], hex);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
int main()
{
    char str[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
}