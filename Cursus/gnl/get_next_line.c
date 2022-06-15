#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		str;
	char		*line = malloc(sizeof(char) * 1000);
	int		i;
	int		n_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return NULL;
	n_read = read(fd, &str, 1);
	while (n_read > 0)
	{
		n_read = read(fd, &str, 1);
		line[i++] = str;
		if (str == '\n')
			break;
	}
	if ((!line[i - 1] && !n_read) || n_read == -1)
	{
		free(line);
		return (NULL);
	}
	line[i] = '\0';
	return (line);
}
