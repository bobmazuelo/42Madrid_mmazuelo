/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:30:30 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/15 09:54:55 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*file;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return NULL;
	file = malloc(sizeof(char) * BUFFER_SIZE);
	read(fd, file, BUFFER_SIZE);
	return (file);
}
