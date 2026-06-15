/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   answer22.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdelucch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/14 19:53:15 by fdelucch          #+#    #+#             */
/*   Updated: 2026/06/14 21:26:26 by gmaggior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*basearray;
int	answer;

basearray = "142324133142341221433241";

char array22[6][4];

char	**array22(char **ptr22, char **questions, char *z)
{
	int i;
	int j;
	int z;

	i=0;
	z=0;
	j=0;
	while (basearray[i])
	{
	    array22[i \ 4][i % 4] =  basearray[i];
	    i++;
	}
	while (answer[i])
	{
		i++;
	}
	if (i == 0)
	{
		while(array22[i][j])
		{
			answer[i][j] = array22[z][j];
			j++;
		}
	}
	while(answer[i][j])
	{

	}
}
