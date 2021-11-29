#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int main()
{
	int i = 5;
	int k = 42;
	int *nbr = &i;
	int *nbr2 = &k;

	printf("%d %d\n", i, k);
	ft_swap(nbr, nbr2);
	printf("%d %d\n", i, k);
	return (0);
}	
