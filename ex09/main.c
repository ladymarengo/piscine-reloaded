#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr);

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int main()
{
	int i = 5;
	int *nbr = &i;

	printf("%d\n", i);
	ft_ft(nbr);
	printf("%d\n", i);
	return (0);
}	
