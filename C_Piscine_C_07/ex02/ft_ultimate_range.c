/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 06:14:39 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/22 18:12:14 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	*array;
	int	k;

	k = 0;
	length = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = malloc(sizeof(int) * length);
	if (!array)
		return (-1);
	while (k < length)
	{
		array[k] = min + k;
		k++;
	}
	*range = array;
	return (length);
}
/*
int	main(void)
{
	int *range;
	int size;
	int i;

	size = ft_ultimate_range(&range, 3, 8);
	if (size <= 0)
	{
		printf("No range created.\n");
		return (0);
	}
	printf("Size: %d\n", size);
	i = 0;
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	free(range);
	return (0);
}
*/
