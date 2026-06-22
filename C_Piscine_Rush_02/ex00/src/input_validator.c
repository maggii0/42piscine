/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validator.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 16:47:36 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/21 07:54:49 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../includes/rush02.h"

void	ft_strlen(char *str);
/*Call it by parsing the *argv with the string */
int validate_arg(char *str)
{
    int i;

    i = 0;

    while (ft_is_space(str[i]))
        i++;

    if (str[i] == '\0')
        return (0);

    while (str[i])
    {
        if (!ft_is_numeric(str[i]))
            return (0);
        i++;
    }
    return (1);
}

int validator(int argc, char *argv[])
{
    int i;

    if (argc < 2 || argc > 3)
        return (0);

    i = 1;
    while (i < argc)
    {
        if (!validate_arg(argv[i]))
            return (0);
        i++;
    }
    return (1);
}

int parser(char *str)
{
    int i;
    int num;

    i = 0;
    num = 0;

    while (ft_is_space(str[i]))
        i++;

    while (str[i])
    {
        num = (num * 10) + (str[i] - '0');
        i++;
    }

    return (num);
}
