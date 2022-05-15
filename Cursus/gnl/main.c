/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 09:52:39 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/15 10:58:39 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>
#include <fcntl.h>

char	*ft_join(char const *s1, char const *s2)
{
	char	*ptr;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	ptr = malloc((strlen(s1) + strlen(s1) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	str = ptr;
	while (*s1 ^ 0)
		*ptr++ = *s1++;
	while (*s2 ^ 0)
		*ptr++ = *s2++;
	*ptr = 0;
	return (str);
}

int	check_10(char *str)
{
    while (*str)
    {
        if (*str == 10)
            return (1);
        str++;
    }
    return (0);
}

char	*get_next_line(int fd)
{
	static char	*file;
    static char	*stock;
    static char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return NULL;
	file = malloc(sizeof(char) * BUFFER_SIZE);
	read(fd, file, BUFFER_SIZE);
	return (file);
}


int	main(int argc, char **argv)
{
	int		fd;
	char	*str;

	fd = open(argv[1], O_RDONLY);
	str = get_next_line(fd);
	while (*str != '\0')
	{
		printf("[%s]\n", str);
		str = get_next_line(fd);
	}
	free(str);
	return (0);
}
