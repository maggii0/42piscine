/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 14:34:27 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/12 13:22:11 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned int)s1[i] - (unsigned int)s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "ABC";
	char	s2[] = "ABH";
	unsigned int n = 2;

	printf("Mi func: %i\n", ft_strncmp(s1, s2, n));
	printf("Def func: %i", strncmp(s1, s2, n));
}
*/
/*
int	main(int argc, char *argv[])
{
	int	res=0;
	if (argc == 3)
		res = ft_strncmp(argv[1], argv[2], atoi(argv[3]));
	if (res == 0) {
		printf("<s1> and <s2> are equal");
		if (argc > 3)
			printf(" in the first %d bytes\n", atoi(argv[3]));
		printf("\n");
	} else if (res < 0) {
		printf("<s1> is less than <s2> (%d)\n", res);
	} else {
		printf("<s1> is greater than <s2> (%d)\n", res);
	}
}
*/
