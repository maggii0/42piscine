/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 18:18:37 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/18 23:26:25 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc <= 1)
	{
		write(1, "Insuficient parameters", 22);
		return (0);
	}
	else
	{
		while (i <= argc - 1)
		{
			write(1, &argv[i][j], 1);
			j++;
			if (argv[i][j] == '\0')
			{
				write(1, "\n", 1);
				j = 0;
				i++;
			}
		}
	}
	return (0);
}
/*
Controlamos hasta argc - 1 porque argc final es valor NULL 
entonces nos da segmentation fault
*/
