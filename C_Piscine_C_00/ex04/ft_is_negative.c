/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 12:19:13 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/07 17:36:50 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_its_negative(int n)
{
	if (n >= 0)
		write (1, "P", 1);
	else
		write (1, "N", 1);
}

int main(void)
{
	ft_its_negative(4);
	ft_its_negative(0);
	ft_its_negative(-4);
	return 0;
}
