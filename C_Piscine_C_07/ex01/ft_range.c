/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 03:18:41 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/21 06:04:12 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;
	int	length;

	array = malloc((max - min) * sizeof(int));
	length = max - min;
	i = 0;
	if (!array)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (i < length)
	{
		array[i] = min++;
		i++;
	}
	return (array);
}

/*
int	main(void)
{
	int i = 0;
	int a = 2;
	int b = 7;
	int len = b - a;
	int *arr = ft_range(a, b);

	while (i < len)
		printf("%i", arr[i++]);
	free(arr);
	return (0);
}
*/
