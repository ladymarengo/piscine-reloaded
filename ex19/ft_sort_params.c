/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamoilo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:30:26 by nsamoilo          #+#    #+#             */
/*   Updated: 2021/10/28 13:54:37 by nsamoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 > *s2)
			return (1);
		else if (*s1 < *s2)
			return (-1);
		s1++;
		s2++;
	}
	if (*s1)
		return (1);
	else if (*s2)
		return (-1);
	else
		return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

char	**sort_params(int len, char **params)
{
	int		i;
	int		count;
	char	*temp;

	count = 1;
	while (count < len)
	{
		i = 1;
		while (i < len - 1)
		{
			if (ft_strcmp(params[i], params[i + 1]) == 1)
			{
				temp = params[i];
				params[i] = params[i + 1];
				params[i + 1] = temp;
			}
			i++;
		}
		count++;
	}
	return (params);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		return (0);
	*argv = *sort_params(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
