/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/13 08:45:07 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/13 18:27:27 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		if (dest[i] == '\0')
		{
			while (src[i])
				dest[i] = src[i];
		}
	}
	return (dest);
}

int	main(void)
{
	char myStr[20] = "Hello";
	char defStr[20] = "Hello";

	strcat(defStr, " World!");
	ft_strcat(myStr, " World!");

	printf("My func: %s", myStr);
	printf("Def func: %s", defStr);
	return(0);
}
