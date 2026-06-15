/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   answer12.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelucch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 19:53:15 by fdelucch          #+#    #+#             */
/*   Updated: 2026/06/14 22:18:22 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*arraybase12

arraybase12 = "3124321441234213";

char array12[5][4];

char	*answer12(char *ptr12, char **questions, char *z)
{
	int	i;
	int	j;
	int	q;
	int	equals;

	q=0;
	i=0;
	j=0;
	equals=0;
	while (arraybase12[i])
	{
	    array12[i \ 4][i % 4] =  arraybase12[i];
	}
	while (answer[i])
	{
		i++;
	}
	if (i == 0)
	{
		while(array12[i][j])
		{
			answer[i][j] = array12[z][j];
			j++;
		}
	}
	while(answer[i][j])
	{
		equals=0;
		while(array12[q][j] && equals == 0)
		{
			j++;	
		}
		if (equals == 1)
			q++;
		i++;
	}
	j = 0;
	while (array12[q][j])
		answer[i][j] = array12[q][j];
}
