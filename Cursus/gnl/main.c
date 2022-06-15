#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int	fd;
	char	*str;

	if (argc == 1)
		exit(1);
	str = NULL;
	fd = open(argv[1], O_RDONLY);
	str = get_next_line(fd);
	while (*str != '\0')
	{
		printf(">%s<", str);
		str = get_next_line(fd);
	}
	free(str);
	close(fd);
	return (0);
}
