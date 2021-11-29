#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strdup(char *src);

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int main()
{
	char source[5] = "Hello";
	char *dest;
	dest = ft_strdup(source);
	printf("%s %s\n", source, dest);
	return (0);
}	
