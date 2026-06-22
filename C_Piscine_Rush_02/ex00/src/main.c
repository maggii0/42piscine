/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 11:39:21 by bepoca            #+#    #+#             */
/*   Updated: 2026/06/20 13:22:59 by bepoca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush02.h"

int		main(int argc, char **argv)
{
	if (argc > 3)
	{
		print_msg("Error");
		return (1);
	}
	//TODO: Si solo hay un argumento, es el valor que necesita convertir.
	
	//TODO: Si hay dos argumentos, el primero es el nuevo diccionario de referencia y el segundo argumento es el valor que necesita convertir.
	
	//TODO: Si el argumento no es un número entero sin signo, vuestro programa deberá devolver ’Error’ seguido de un salto de línea.

	//TODO: parse number	
	
	//TODO: translate	

	print_msg(argv[0]);
	return (0);
}

