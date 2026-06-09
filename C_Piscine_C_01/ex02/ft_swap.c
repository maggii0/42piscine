/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 11:44:15 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/09 14:23:57 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
int main(void)
{
	int	*a;
	int	*b;
	int	num1;
	int	num2;

	num1 = 2;
	num2 = 4;
	a = &num1;
	b = &num2;

  ft_swap(a, b);
  printf("%i%i\n", *a, *b);
}
*/
