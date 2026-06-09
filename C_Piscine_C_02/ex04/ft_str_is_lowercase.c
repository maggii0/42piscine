/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <gmaggior@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 22:25:46 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/09 23:21:31 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
  int i;

  i = 0;
  while (str[i])
  { 
    if (!(str[i] >= 'a' && str[i] <= 'z'))
      return (0);
    i++;
  }
  return (1);
}

int main(void)
{
    printf("%d\n", ft_str_is_lowercase("Hello"));
    printf("%d\n", ft_str_is_lowercase("Hello123"));
    printf("%d\n", ft_str_is_lowercase(""));
    printf("%d\n", ft_str_is_lowercase("abc!def"));
    printf("%d\n", ft_str_is_lowercase("alllowercase"));
}
