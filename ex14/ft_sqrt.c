/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamoilo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:39:17 by nsamoilo          #+#    #+#             */
/*   Updated: 2021/10/29 15:57:01 by nsamoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	root;

	root = nb / 2;
	if (nb <= 0)
		return (0);
	while (root > 0)
	{
		if (root * root == nb && nb / root == root)
			return (root);
		root--;
	}
	return (root);
}
