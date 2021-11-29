/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamoilo <nsamoilo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:39:31 by nsamoilo          #+#    #+#             */
/*   Updated: 2021/10/28 15:51:59 by nsamoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*array;
	long	range;
	long	i;

	i = 0;
	if (min >= max)
		return (0);
	range = max - min;
	array = (int *)malloc(sizeof(int) * range);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
