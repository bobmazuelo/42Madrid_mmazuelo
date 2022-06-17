#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int	fd;
	char	*str;
	int	n;

	if (argc == 1)
		exit(1);
	str = NULL;
	n = 0;
	fd = open(argv[1], O_RDONLY);
	str = get_next_line(fd);
	while (*str != '\0' && n < atoi(argv[2]))
	{
		printf("%s", str);
		str = get_next_line(fd);
		n++;
	}
	free(str);
	close(fd);
	return (0);
}
