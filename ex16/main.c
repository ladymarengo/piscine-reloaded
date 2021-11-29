#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int main()
{
	printf("%d\n", ft_strlen("Hello world!\n"));
	printf("%d\n", ft_strlen(""));
	return (0);
}	
