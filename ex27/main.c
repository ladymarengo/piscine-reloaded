/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamoilo <nsamoilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:25:38 by nsamoilo          #+#    #+#             */
/*   Updated: 2021/10/29 13:42:48 by nsamoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

void	ft_putstr(int fd, char *str)
{
	while (*str)
	{
		write(fd, &(*str), 1);
		str++;
	}
}

void	print_error(int argc)
{
	if (argc == 1)
		ft_putstr(2, "File name missing.\n");
	else
		ft_putstr(2, "Too many arguments.\n");
}

int	main(int argc, char **argv)
{
	int		file;
	int		chars;
	char	buffer[10];
	int		reading;

	if (argc != 2)
	{
		print_error(argc);
		return (1);
	}
	file = open(argv[1], O_RDONLY);
	reading = 1;
	while (reading)
	{
		chars = read(file, buffer, 9);
		if (chars == 0)
			reading = 0;
		else
		{
			buffer[chars] = '\0';
			ft_putstr(1, buffer);
		}
	}
	close(file);
	return (0);
}
