/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelucch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 19:45:19 by fdelucch          #+#    #+#             */
/*   Updated: 2026/06/14 21:57:58 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	**rush_01(char	**ptr22, char **questions)
{
	int	i;
	char	*z[5];

	i = 0;
	while(answer == 0)
	{
		if (ptr22[0][0] = 2 &&  ptr22[1][0] = 2)
			answer22(ptr22, questions);
		else if ((ptr41[0][0] = 4 &&  ptr41[1][0] = 1) 
				|| (ptr41[0][0] = 1 &&  ptr41[1][0] = 4))
			answer41(ptr22, questions);
		else if ((ptr31[0][0] = 3 &&  ptr22[1][0] = 1) 
				|| (ptr31[0][0] = 1 &&  ptr22[1][0] = 3))
			answer31(ptr22, questions);
		else if ((ptr32[0][0] = 3 &&  ptr22[1][0] = 2) 
				|| (ptr32[0][0] = 2 &&  ptr22[1][0] = 3))
			answer32(ptr22, questions);
		else if ((ptr12[0][0] = 1 &&  ptr12[1][0] = 2) 
				|| (ptr12[0][0] = 2 &&  ptr12[1][0] = 1))
			answer12(ptr22, questions)
		else
			answer = -1;

	}	
}
