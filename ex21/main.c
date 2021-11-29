#include <unistd.h>
#include <stdio.h>
#include <string.h>

int *ft_range(int min, int max);

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int main()
{
	int i = 0;
	int *array;
	array = ft_range(-3, 5);
	while (i < 9)
	{
		printf("%d\n", array[i]);
		i++;
	}
	return (0);
}	
