/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 13:10:47 by bepoca            #+#    #+#             */
/*   Updated: 2026/06/20 13:23:19 by bepoca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

typedef struct s_dict
{
	char	*key;
	char	*value;
} t_dict;

void    print_msg(char *msg);
