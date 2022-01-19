#include <unistd.h>
#include <stdlib.h>

char    to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + ('a' - 'A'));
    return (c);
}

int     get_digit(char c, int digits_in_base)
{
    int max_digit;
    if (digits_in_base <= 10)
        max_digit = digits_in_base + '0';
    else
        max_digit = digits_in_base - 10 + 'a';

    if (c >= '0' && c <= '9' && c <= max_digit)
        return (c - '0');
    else if (c >= 'a' && c <= 'f' && c <= max_digit)
        return (10 + c - 'a');
    else
        return (-1);
}

int     ft_atoi_base(const char *str, int str_base)
{
    int result = 0;
    int sign = 1;
    int digit;

    if (*str == '-')
    {
        sign = -1;
        ++str;
    }

    while ((digit = get_digit(to_lower(*str), str_base)) >= 0)
    {
        result = result * str_base;
        result = result + (digit * sign);
        ++str;
    }
    return (result);
}

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
