#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int main()
{
	char *a = "Hello";
	char *b = "hellilo";
	char *c = "abcd";
	char *d = "abcde";
	char *e = "";
	char *f = "";
	printf("%d %d\n", strcmp(a, b), ft_strcmp(a, b));
	printf("%d %d\n", strcmp(c, d), ft_strcmp(c, d));
	printf("%d %d\n", strcmp(e, f), ft_strcmp(e, f));
	return (0);
}	
