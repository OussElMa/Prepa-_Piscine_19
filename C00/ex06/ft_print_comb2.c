#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void    ft_print_comb2(void)
{
    char nb[] = {"0123456789"};
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    while(a < 9)
    {
        while(b < 9)
        {
            while(c < 9)
            {
                while(d < 10)
                {
                    if(d > b && c >= a)
                    {
                        ft_putchar(nb[a]);
                        ft_putchar(nb[b]);
                        ft_putchar(' ');
                        ft_putchar(nb[c]);
                        ft_putchar(nb[d]);
                        ft_putchar(',');
                    }
                    d++; 
                }      
                d = 0;
                c++;
            }
            c = 0;
            b ++;
        }
        b = 0;
        a ++;
    }
}
int main() 
{
    ft_print_comb2();
    return 0;
}