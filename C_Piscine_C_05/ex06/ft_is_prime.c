/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 12:57:18 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/18 18:04:35 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	int	num1 = 0;
	int	num2 = 1;
	int	num3 = 2;
	int	num4 = 13;
	int	num5 = 22;
	printf("El numero %i es primo? %i\n", num1, ft_is_prime(num1));
	printf("El numero %i es primo? %i\n", num2, ft_is_prime(num2));
	printf("El numero %i es primo? %i\n", num3, ft_is_prime(num3));
	printf("El numero %i es primo? %i\n", num4, ft_is_prime(num4));
	printf("El numero %i es primo? %i\n", num5, ft_is_prime(num5));
}
*/
