#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb);

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int main()
{
	printf("5 %d\n", ft_iterative_factorial(5));
	printf("1 %d\n", ft_iterative_factorial(1));
	printf("0 %d\n", ft_iterative_factorial(0));
	printf("-5 %d\n", ft_iterative_factorial(-5));
	printf("3 %d\n", ft_iterative_factorial(3));
	printf("15 %d\n", ft_iterative_factorial(15));
	return (0);
}	
