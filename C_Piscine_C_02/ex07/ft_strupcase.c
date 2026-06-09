/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <gmaggior@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 23:34:21 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/09 23:45:11 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strupcase(char *str)
{
 int  i;

  i = 0;
  while(str[i])
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] = str[i] - 32;
    i++;
  }
  return (str);
}

int main(void)
{
    char str1[] = "hello world";
    char str2[] = "Hello World!";
    char str3[] = "";
    char str4[] = "abc123def";

    printf("%s\n", ft_strupcase(str1));
    printf("%s\n", ft_strupcase(str2));
    printf("%s\n", ft_strupcase(str3));
    printf("%s\n", ft_strupcase(str4));
}
