/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 14:34:27 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/12 11:54:45 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(int argc, char *argv[]){
	if (argc < 4)
		if (ft_strcmp(argv[1], argv[2]) == 1)
			printf("meva func: %s es mes gran que %s\n", argv[2], argv[1]);
		else if (ft_strcmp(argv[1], argv[2]) == 2)
			printf("%s es mes gran que %s", argv[1], argv[2]);
		else
			printf("Error al operar amb els strings");
	else
		printf("Invalid Arguments");
}	
*/
