#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char			str;
	char			*c;
	char			*line;
	int			n_read;
	int			i;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return NULL;
	i = 0;
	line = malloc(sizeof(char) * BUFFER_SIZE);
	c = malloc(sizeof(char) * 2);
	ft_bzero(c, 2);
	ft_memcpy(line, c, 2);
	while ((n_read = read(fd, &str, 1)) > 0)
	{
		*c = str;
		line = ft_strjoin(line, c);
		i++;
		if (str == '\n')
			break;
	}
	line[i] = '\0';
	/*
	if((line[i - 1] && !n_read) || n_read <= 0)
	{
		free(line);
		return (NULL);
	}
	*/
	return (line);
}
