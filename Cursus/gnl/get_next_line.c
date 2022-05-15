/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:30:30 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/15 11:38:36 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*file;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return NULL;
	file = malloc(sizeof(char) * BUFFER_SIZE + 1);
	read(fd, file, BUFFER_SIZE);
	return (file);
}


// Crear una variable stash donde guarda el join de los nbytes leidos por read.
// Luego con strchr corto hasta la \n y lo meto en line
//
//
// fd		[Hola Mundo\nHello World!]
// 							stock	NULL
// file		[Hola ]	-------------join------------->	stock	[Hola ]
//							line	[]
// BUFFER	5
// -----------------------------------------------------------------------------------
// fd		[Hola Mundo\nHello World!]
//							stock	[Hola ]
// file		[Mundo]	-------------join------------->	stock	[Hola Mundo]
//							line	[]
// BUFFER	5
// -----------------------------------------------------------------------------------
// fd		[Hola Mundo\nHello World!]						|
// 							stock	[Hola Mundo]		| while (stock != \n)
// file		[\nHell] -------------join------------>	stock	[Hola Mundo\nHell]	|	*line++ = *stock++
//							line	[]			|
// BUFFER	5									| strchr(stock, '\n')
// -----------------------------------------------------------------------------------
// fd		[Hola Mundo\nHello World!]						|
// 											|
// file		[\nHell]				stock	[Hell]			|
//							line	[Hola Mundo]		|
// BUFFER	5									| return (line)
