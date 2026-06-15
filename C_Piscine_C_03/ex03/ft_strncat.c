/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 08:45:07 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/15 12:12:46 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (j < nb && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char myStr[20] = "Hello";
	char defStr[20] = "Hello";

	strncat(defStr, " World!", 5);
	ft_strncat(myStr, " World!", 5);

	printf("My func: %s \n", myStr);
	printf("Def func: %s", defStr);
	return(0);
}
