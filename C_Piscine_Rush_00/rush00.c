/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 10:16:55 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/07 12:20:09 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*/
#include <unistd.h>

void	ft_putchar(char c);

int	much_lines(int i, int rows)
{
	if (i < rows)
		ft_putchar('\n');
	return (1);
}

void	rush(int rows, int columns)
{
	int	i;
	int	j;

	i = 0;
	while (i <= columns - 1 && rows > 0)
	{
		j = 0;
		while (j <= rows - 1)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == rows - 1)
				|| (i == columns - 1 && j == 0)
				|| (i == columns - 1 && j == rows - 1))
				ft_putchar('o');
			else if ((i == 0 && j != rows - 1)
				|| (i == columns - 1 && j != rows - 1))
				ft_putchar('-');
			else if ((j == 0 && i != columns - 1)
				|| (j == rows - 1 && i != columns - 1))
				ft_putchar('|');
			else
				ft_putchar(' ');
			j++;
		}
		i = i + much_lines(i, columns);
	}
}
