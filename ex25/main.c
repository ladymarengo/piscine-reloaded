#include <unistd.h>
#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void putnbr(int i)
{
	printf("%d\n", i);
}

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int main()
{
	int array[] = {1, 2, 4, 5};
	void (*put)(int);
	put = &putnbr;
	ft_foreach(array, 4, put);
	return (0);
}	
