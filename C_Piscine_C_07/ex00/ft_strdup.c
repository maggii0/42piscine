/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 01:15:26 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/22 16:20:08 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*array;

	array = malloc((ft_strlen(src) + 1));
	if (!src)
		return (NULL);
	if (array == NULL)
		return (NULL);
	ft_strcpy(array, src);
	return (array);
}

/*
int	main(void)
{
	printf("La cadena es: %s", ft_strdup("Hola, buenos dias"));
	return (0);
}
*/
