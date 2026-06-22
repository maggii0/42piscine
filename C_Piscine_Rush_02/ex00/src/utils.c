/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 13:07:19 by bepoca            #+#    #+#             */
/*   Updated: 2026/06/21 07:51:46 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

void    print_msg(char *msg)
{
    char c;
    c = ' ';
    while (*msg)
    {
        c = *msg;
        write (1,&c,1);
        msg++;
    }
}

void	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_is_space(char c)
{
	if ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		return (1);
	return (0);
}
