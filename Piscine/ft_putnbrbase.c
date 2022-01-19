#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr != '\0')
		ptr++;
	return (ptr - str);
}

void	ft_print_num(long long num, int base_l, char *base)
{
	if (num >= base_l)
		ft_print_num(num / base_l, base_l, base);
	write(1, &base[num % base_l], 1);
}


int	main(int argc, char **argv)
{
	if (argc == 0)
		return (1);
	else
	{
		int	nb = atoi(argv[1]);
		char	*b_s = argv[2];
		int	b = ft_strlen(b_s);

		ft_print_num(nb, b, b_s);
		write(1, "\n", 1);
	}
	return (0);
}
