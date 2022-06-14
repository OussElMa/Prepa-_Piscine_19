#include <stdio.h>
void    ft_ultimate(int *********nbr)
{
    *********nbr = 42;
}
int main()
{
    int n;
    int *nb1;
    int **nb2;
    int ***nb3;
    int ****nb4;
    int *****nb5;
    int ******nb6;
    int *******nb7;
    int ********nb8;
    int *********nb9;

    n = 2;
    nb1 = &n;
    nb2 = &nb1;
    nb3 = &nb2;
    nb4 = &nb3;
    nb5 = &nb4;
    nb6 = &nb5;
    nb7 = &nb6;
    nb8 = &nb7;
    nb9 = &nb8;

    ft_ultimate(nbr);
    printf("%d\n", n);
    int n;
	int *nbr8;
	int **nbr7;
	int ***nbr6;
	int ****nbr5;
	int *****nbr4;
	int ******nbr3;
	int *******nbr2;
	int ********nbr1;
	int *********nbr;


	n = 21;
	
	nbr8 = &n;
	nbr7 = &nbr8;
	nbr6 = &nbr7;
	nbr5 = &nbr6&;
	nbr4 = &nbr5;
	nbr3 = &nbr4;
	nbr2 = &nbr3;
	nbr1 = &nbr2;
	nbr = &nbr1;
	

	ft_ultimate(nbr1);
	printf("%d", n);	
	return 0;
}