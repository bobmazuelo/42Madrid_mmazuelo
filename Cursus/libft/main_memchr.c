#include <stdio.h>

void    *ft_memchr(const void *s, int c, size_t n)
{
        size_t          i;
        const char      *str;

        i = 0;
        str = s;
        while (i < n)
        {
                if (*str == c)
                        return ((void *)(str));
                str++;
                i++;
        }
        return (0);
}

int	main(void)
{
	char s[] = {0, 1, 2, 3, 4, 5};
	if (ft_memchr(s, 2 + 256, 3) == s + 2)
		printf("HOLA\n");
	return (0);
}
