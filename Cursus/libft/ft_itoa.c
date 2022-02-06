#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;

	if (n <= -2147483648)
		return (NULL);
	else if (n < 0)
	{
		n -= n;
		// write(1, "-", 1);
	}
	if (n > 9)
	{
		ft_itoa(n / 10);
		ft_itoa(n % 10);
	}
	else if (nb != -2147483648)
	{
		n = n ^ 0x30;
		// write(1, &n, 1);
	}
	return (str);
}

