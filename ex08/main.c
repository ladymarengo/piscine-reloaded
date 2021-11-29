#include <unistd.h>

void ft_is_negative(int n);

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int main()
{
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(2);
	ft_is_negative(-5);
	ft_is_negative(3);
	ft_putchar('\n');
	return (0);
}	
