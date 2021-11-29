/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsamoilo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:20:33 by nsamoilo          #+#    #+#             */
/*   Updated: 2021/10/28 11:35:54 by nsamoilo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;
	int	temp;

	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else
	{
		temp = ft_recursive_factorial(nb - 1);
		result = nb * temp;
		if (temp == 0 || result / temp != nb)
			return (0);
		return (result);
	}
}	
