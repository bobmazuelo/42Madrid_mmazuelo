/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:30:30 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/14 22:24:16 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <fcntl.h>

char	*get_next_line(int fd)
{
	static char	*file;
	char		*line;
	int			done;
	
	if (fd < 0 || BUFFER_SIZE <= 0)
		return NULL;
	file = malloc(sizeof(char) * BUFFER_SIZE);
	done = read(fd, file, BUFFER_SIZE);
	return (line);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	*str;

	fd = open(argv[1], O_RDONLY);
	str = get_next_line(fd);
	while (*str != '\0')
	{
		printf("|%s|\n", str);
		free(str);
		str = get_next_line(fd);
	}
	return (0);
}
