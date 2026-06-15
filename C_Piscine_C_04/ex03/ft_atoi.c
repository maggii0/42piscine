/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 18:32:08 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/15 18:51:57 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
	 Write a function that converts the initial portion of the string pointed to by str into its
	integer representation.
	• The string may begin with an arbitrary amount of whitespace (as determined by isspace(3)).
	• The string may be preceded by an arbitrary number of ‘+’ and ‘-’ signs. A ‘-’ sign
	will invert the result depending on whether the number of ‘-’ signs is odd or even.
	• The function should then process any consecutive digits in base 10.
	• The function reads the string until a non-conforming character is encountered and returns
	the number obtained so far.
	• Overflow and underflow do not need to be handled; the function’s return value is undefined
	in such cases.
 */
/*
- Skip whitespaces(ASCII (>= 9 && <= 13) || ' ')
- Count '-' if count % 2 == 0 then + else - 
- Process process to decimal (+ '0')
- Iterate until !(str[i] > 0 && str[i] < 9)
- return(int)
 */
int ft_atoi(char *str)
{

}
