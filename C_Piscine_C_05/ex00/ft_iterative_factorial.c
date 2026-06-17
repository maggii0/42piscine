/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 11:57:12 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/16 22:01:21 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/* REQUIREMENTS
	- nb >= '0' && nb <= '9' and has to be int
		- if != return 0
*/
int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 0;
	while (nb >= 1)
	{
		i = nb * (nb - 1);
		nb--;
	}
	return (i);
}

int	main(void)
{
	printf("Factorial del numero proporcionat es: %i", ft_iterative_factorial(4));
	return (0);
}
