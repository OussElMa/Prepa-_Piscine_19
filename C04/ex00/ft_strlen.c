#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int nb)
{
    int neg;
    neg = -1;
    if (nb == -2147483648)
	{	
		ft_putchar('2');
		nb = 147483648;
	}
    if (nb >= 0 && nb <= 9)
    {
        ft_putchar(nb + 48);
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(nb *= neg);
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
    char bla[] = "blbasvqfqsfqsdfqdsfqsdfsdqlba";
    int longeur;
	longeur = ft_strlen(bla);
	ft_putnbr(longeur);
}