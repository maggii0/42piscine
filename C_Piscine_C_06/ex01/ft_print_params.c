/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 18:18:37 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/18 18:38:15 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc <= 1)
		return(0);
	else
	{
		while (ft_strlen(&argv[i][j]))
		{
			write(1, &argv[i][j], 1);
			j++;
			if (&argv[i][j] == '\0')
				i++;
		}
	}
	return (0);	
}
