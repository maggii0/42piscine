/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmaggior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 21:19:38 by gmaggior          #+#    #+#             */
/*   Updated: 2026/06/14 21:21:13 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     nums(char *str)
{
        int     i;
	int	nums;

        i = 0;
        while (str[i])
	{
		if ((str[i] == ' ' && i % 2 != 0) &&
			       ((str[i] >= '0' && str[i] <= '9') && i % 2 == 0))
			nums++;
		i++;
	}
        return (nums);
}

int	main(int argc, char *argv[])
{
	char	questions[4][4];
	char    answers[4][4];
	int	i;
	int	j;
	int	z;

	j = 0;
	i = 0;
	z = 0;
	if(argc == 2 && nums(argv[1]) == 31)
	{
		while(argv[1][i])
		{
			if(argv[1][i] >= '0' && argv[1][i] <= '9')
			{
				question[j / 4][j % 4];
				j++;
			}
			i++;
		}
		rush01(answers, questions);
	}
	else
	{
		printf("errores");
	}

}
