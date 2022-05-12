#include "bsq.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int	fd;
	char	*line;

	if (argc != 2)
		exit(1);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			exit(1);
		line = calloc(83648, sizeof(char *));
		read(fd, line, 1000);
		bsq_map(line);
		ft_str(line);
		close(fd);
		ft_putchar(0x0a);
		return (0);
	}
	return (1);
}
