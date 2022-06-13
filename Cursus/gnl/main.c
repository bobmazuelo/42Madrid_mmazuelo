#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int	fd;
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
