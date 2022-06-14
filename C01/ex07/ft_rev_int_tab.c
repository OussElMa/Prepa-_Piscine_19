#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int ft_rev_int_tab(int *tab, int size)
{
    int tabcopy[100];
    int i;
    i = 0;
    while( tab[i] != '\0')
    {
        tabcopy[size-i] = tab[i];
        i++;
    }
    i = 1;
    while(i <= size)
    {
        ft_putchar(tabcopy[i] + 48);
        i++;
    }
    return(tabcopy[i]);
}
int main()
{
    int tatab[100] = {1,2,3,4,5,6,7,8,9};
    ft_rev_int_tab(tatab, 9);
}