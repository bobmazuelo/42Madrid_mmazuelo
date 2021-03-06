#include "bsq.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	num;
	int	sign;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (str[i] & 0xF) + (num * 10);
		i++;
	}
	if (num > 1<<31 && sign > 0)
		return (-1);
	if (num > MAX && sign < 0)
		return (0);
	return ((int)(num * sign));
}

char	*ft_x(char *str)
{
	int	i;

	i = 0;
	while(*str ^ '\0')
	{
		if (*str == '.' && i % 2 == 0)
			*str = 'x';
		str++;
		i++;
	}
	return (str);
}

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_str(const char *str)
{
	while (*str ^ '\0')
		ft_putchar(*str++);
}
