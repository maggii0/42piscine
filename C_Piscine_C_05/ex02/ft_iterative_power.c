/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 13:35:07 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/20 19:13:52 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	nb_start;

	nb_start = nb;
	if (power < 0)
		return (0);
	if (power == 0)
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
	printf("La potencia es: %i\n", ft_iterative_power(0, 0));
	printf("La potencia es: %i\n", ft_iterative_power(1380, -1));
	printf("La potencia es: %i\n", ft_iterative_power(1, 2));
	printf("La potencia es: %i\n", ft_iterative_power(30, 1));
	printf("La potencia es: %i\n", ft_iterative_power(15, 5));
	printf("La potencia es: %i\n", ft_iterative_power(18, 3));
	printf("La potencia es: %i\n", ft_iterative_power(15, 1));
	printf("La potencia es: %i\n", ft_iterative_power(3, 4));
	printf("La potencia es: %i\n", ft_iterative_power(1, 2));
	printf("La potencia es: %i\n", ft_iterative_power(12, 0));
	return (0);
}
*/
