#include "get_next_line.h"
#include <string.h>

char	*get_next_line(int fd)
{
	static char	*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return NULL;
	line = malloc(sizeof(char) * BUFFER_SIZE + 1);
	read(fd, line, BUFFER_SIZE);
	
}
