#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb);

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int main()
{
	printf("10 %d\n", ft_sqrt(10));
	printf("0 %d\n", ft_sqrt(0));
	printf("-10 %d\n", ft_sqrt(-10));
	printf("200707886 %d\n", ft_sqrt(200707886));
	printf("1650959424 %d\n", ft_sqrt(1650959424));
	return (0);
}	
