#include <unistd.h>
#include <stdio.h>

int	ft_count_if(char **tab, int(*f)(char*));

int ft_strlen(char *str)
{
	int len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int main()
{
	char *array[] = {"hey", "h", "", "b", "d", 0};
	printf("%d\n", ft_count_if(array, &ft_strlen));
	return (0);
}	
