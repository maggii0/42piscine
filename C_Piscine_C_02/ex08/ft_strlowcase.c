/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <gmaggior@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 23:34:21 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/12 11:00:32 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*
int main(void)
{
    char str1[] = "hello world";
    char str2[] = "Hello World!";
    char str3[] = "";
    char str4[] = "abc123def";

    printf("%s\n", ft_strlowercase(str1));
    printf("%s\n", ft_strlowercase(str2));
    printf("%s\n", ft_strlowercase(str3));
    printf("%s\n", ft_strlowercase(str4));
}
*/
