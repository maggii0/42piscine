/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 11:57:12 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/17 10:43:29 by gmaggior         ###   ########.fr       */
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

	i = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
int	main(void)
{
	printf("Factorial del numero proporcionat es: %i", ft_iterative_factorial(-6));
	return (0);
}
