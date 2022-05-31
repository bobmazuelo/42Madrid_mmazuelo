/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 09:52:39 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/15 22:33:49 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	*str;

	str = NULL;
	fd = open(argv[1], O_RDONLY);
	str = get_next_line(fd);
	while (*str != '\0')
	{
		printf(">%s<", str);
		str = get_next_line(fd);
	}
	free(str);
	return (0);
}
