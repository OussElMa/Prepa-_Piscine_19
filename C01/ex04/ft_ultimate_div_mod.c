#include <stdio.h>
void   ft_ultimate_div_mod(int *a, int *b)
{
    int swap;
    swap = *a;
    *a = *a / *b;
    *b = swap % *b;
}

int main()
{
    int un, deux;
    un = 30;
    deux = 3;
    ft_ultimate_div_mod(&un, &deux);
    printf("%d %d", un, deux);
} 