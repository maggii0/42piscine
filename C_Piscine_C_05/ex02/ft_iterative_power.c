/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 13:35:07 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/17 20:05:05 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	nb_start;

	nb_start = nb;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power - 1 > 0)
	{
		nb *= nb_start;
		power--;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("La potencia es: %i", ft_iterative_power(0, 0));
	return (0);
}
*/
