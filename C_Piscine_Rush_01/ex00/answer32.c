/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   answer32.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelucch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 19:53:15 by fdelucch          #+#    #+#             */
/*   Updated: 2026/06/14 21:27:07 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*arraybase32;

arraybase32 = "13421432243134212341";

char array32[5][4];

char	*answer32(char *ptr32, char **questions, char *z)
{
	while (arraybase32[i])
	{
	    array32[i \ 4][i % 4] =  arraybase32[i];
	}
	while (answer[i])
	{
		i++;
	}
	if (i == 0)
	{
		while(array32[i][j])
		{
			answer[i][j] = array32[z][j];
			j++;
		}
	}
	while(answer[i][j])
	{

	}
}
}
