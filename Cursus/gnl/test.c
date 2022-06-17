#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "get_next_line.h"

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"

int	main(void)
{
	char	*str;
	char	*c;

	c = NULL;
	str = malloc(4 * sizeof(char));
	ft_bzero(c, 2);
	strcpy(str, "N: ");
	*c = 48;

	str = ft_strjoin(str, c);
	printf("%s\n", str);
	free(str);
	return (0);
}
