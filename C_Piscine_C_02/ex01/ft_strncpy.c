/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <gmaggior@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 22:08:30 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/11 22:00:49 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int main() {
  char str1[] = "Hello World!";
  char str2[] = "Write code!";
  ft_strncpy(str2, str1, 6);
  printf("%s\n", str1);
  printf("%s\n", str2);
  return 0;
}
*/
