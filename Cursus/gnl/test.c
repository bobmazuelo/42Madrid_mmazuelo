#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"

int	main(int argc, char **argv)
{
	int	fd;
	char	*str;
	int	n_read;

	if (argc == 1)
		exit(1);
	fd = open(argv[1], O_RDONLY);
	str = malloc(BUFFER_SIZE * sizeof(char));

	if (fd < 0 || BUFFER_SIZE <= 0)
		exit(1);
	while((n_read = read(fd, str, BUFFER_SIZE)) > 0)
	{
		printf("\n--------------------------------\n");
		printf("fd: %d\n", fd);
		printf("n_read: %d\n", n_read);
		printf("string: %s%s%s", KRED, str, KNRM);
	}
	free(str);
	close(fd);
	return (0);
}
