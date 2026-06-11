/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <gmaggior@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 22:25:46 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/11 14:10:54 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 127))
			return (0);
		i++;
	}
	return (1);
}

/*
int main(void)
{
    printf("%d\n", ft_str_is_printable("Hello"));
    printf("%d\n", ft_str_is_printable("\n"));
    printf("%d\n", ft_str_is_printable(""));
    printf("%d\n", ft_str_is_printable("ñ"));
    printf("%d\n", ft_str_is_printable("ALLCAPS"));
}
*/
