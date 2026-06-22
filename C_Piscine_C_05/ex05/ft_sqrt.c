/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <gmaggior@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 20:00:35 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/21 08:10:35 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("La arrel quadrada %i es: %i\n", 0, ft_sqrt(0));
	printf("La arrel quadrada %i es: %i\n", 1, ft_sqrt(1));
	printf("La arrel quadrada %i es: %i\n", 2, ft_sqrt(2));
	printf("La arrel quadrada %i es: %i\n", 4, ft_sqrt(4));
	printf("La arrel quadrada %i es: %i\n", 2147483647, ft_sqrt(2147483647));
	printf("La arrel quadrada %i es: %i\n", -16, ft_sqrt(-16));
	return (0);
}
