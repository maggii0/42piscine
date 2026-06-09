/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <gmaggior@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 22:25:46 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/09 23:12:16 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
  int i;

  i = 0;
  while (str[i])
  { 
    if (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z'))
      return (0);
    i++;
  }
  return (1);
}

int main(void)
{
    printf("%d\n", ft_str_is_alpha("Hello"));
    printf("%d\n", ft_str_is_alpha("Hello123"));
    printf("%d\n", ft_str_is_alpha(""));
    printf("%d\n", ft_str_is_alpha("abc!def"));
    printf("%d\n", ft_str_is_alpha("ALLCAPS"));
}
