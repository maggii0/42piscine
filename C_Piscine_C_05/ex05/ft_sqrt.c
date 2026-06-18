/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <gmaggior@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 20:00:35 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/17 21:24:50 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (!(i * i == nb))
		return (ft_sqrt(i + 1));
}

int	main(void)
{
	printf("La arrel quadrada del numero proporcionat es: %i", ft_sqrt(16));
	return (0);
}
