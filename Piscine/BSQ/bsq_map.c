#include "bsq.h"

struct	map {
	int	rows;
	char	empty;
	char	obs;
	char	full;
};

char	*bsq_map(int fd)
{
	char *str;

	str = calloc(100, sizeof(char *));
	read(fd, str, 100);
}
