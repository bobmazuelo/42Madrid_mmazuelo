#include "get_next_line.h"
/*
size_t	ft_strlen(const char *str)
{
	const char	*ptr;

	ptr = str;
	while(*ptr != '\0')
		ptr++;
	return (ptr - str);
}


char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

void	ft_strcat(char *s1, char *s2)
{
	while (*s1)
		s1++;
	while (*s2)
	{
		*s1 = *s2;
		s2++;
		s1++;
	}
	*s1++ = '\0';
}

char	*read_nl(char *line)
{
	char	*stock;
	
	if (!strchr(line, '\n'))
		ft_strcat(stock, line);
	else
	{
		ft_strcat(stock, line);
		strrchr(line, '\n');
	}
	return (stock);
}
*/

