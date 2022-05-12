#include "bsq.h"

struct	map {
	int	rows;
	char	void_dot;
	char	obs_o;
	char	full_x;
};

char	*bsq_map(int fd)
{
	struct map line = {
		1,
		'.',
		'o',
		'x'
	};
}
