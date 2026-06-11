/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <gmaggior@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 22:25:46 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/11 14:08:19 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*
int main(void)
{
    printf("%d\n", ft_str_is_numeric("12345"));
    printf("%d\n", ft_str_is_numeric("123A567"));
    printf("%d\n", ft_str_is_numeric(""));
    printf("%d\n", ft_str_is_numeric("1233467B9"));
    printf("%d\n", ft_str_is_numeric("12345678900987654321"));
}
*/
