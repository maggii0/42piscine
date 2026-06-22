/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 18:32:08 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/21 06:49:06 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
- Skip whitespaces(ASCII (>= 9 && <= 13) || ' ')
- Count '-' if count % 2 == 0 then + else - 
- Process process to decimal (+ '0')
- Iterate until !(str[i] > 0 && str[i] < 9)
- return(int)
 */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	negative_c;
	int	num;

	i = 0;
	num = 0;
	negative_c = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative_c++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	if (negative_c % 2 == 0)
		return (num);
	else
		return (-num);
}
int	main(void)
{
	printf("%i", ft_atoi("      ---+--+a1234ab567"));
	return (0);
}
