#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)     		 /* Функция вывода числа */
{
	int		temp;
	int		size;

	size = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == -2147483648)
	{	
		ft_putchar('2');
		nb = 147483648;
	}
	temp = nb;
	while ((temp /= 10) > 0)
		size *= 10;
	temp = nb;
	while (size)
	{
		ft_putchar((char)(temp / size) + '0');
		temp %= size;
		size /= 10;
	}
}


int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}
int main()
{
	char bla[] = "IMPRIME!";
	int longeur;
	longeur = ft_strlen(bla);
	ft_putnbr(longeur);
	return(0);

}