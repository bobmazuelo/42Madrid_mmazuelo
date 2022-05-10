/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manhattan_dist.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:20:18 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/15 14:55:28 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "BSQlib.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*read_line(char *file_dir)
{
	char	*line;
	if (file_dir == NULL)
		return (0);
	else
	{
		line = read(file_dir, 2, 2);
	}
}


int main(int argc, char **argv)
{
	char	*out;

	out = read_line(argv[1]);
	printf("%s", out);
	return (0);
}
