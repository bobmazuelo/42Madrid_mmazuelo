#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char			str;
	static char		*line;
	int			i;
	int			n_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return NULL;
	line = malloc(sizeof(char) * BUFFER_SIZE);
	i = 0;
	while ((n_read = read(fd, &str, 1)) > 0)
	{
		ft_strjoin(line, &str);
		i++;
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
