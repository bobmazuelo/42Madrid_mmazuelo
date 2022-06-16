#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	const char	*ptr;

	ptr = str;
	while(*ptr != '\0')
		ptr++;
	return (ptr - str);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (unsigned char)c)
		i++;
	if (s[i] == (unsigned char)c)
		return ((char *)s + i);
	return (NULL);
}

//char	*ft_strcat(char *dest, char *src)
//{
//	int	i;
//	int	j;
//
//	i = 0;
//	while (dest[i] != '\0')
//		i++;
//	j = 0;
//	while (src[j] != '\0')
//	{
//		dest[i + j] = src[j];
//		j++;
//	}
//	dest[i + j] = '\0';
//	return (dest);
//}

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
