#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);


void ft_putchar(char c)
{
	write (1, &c, 1);
}

int main()
{
	int i = 42;
	int k = 5;
	int d;
	int m;
	int *div = &d;
	int *mod = &m;

	printf("%d %d\n", i, k);
	ft_div_mod(i, k, div, mod);
	printf("%d %d\n", d, m);
	return (0);
}	
