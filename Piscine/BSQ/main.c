#include "bsq.h"
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int	fd;
	char	*line;

	if (argc ^ 2)
		exit(1);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd < 0)
			exit(1);
		ft_x(fd);
		close(fd);
		ft_putchar('\n');
		return (0);
	}
	return (1);
}
