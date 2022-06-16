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

//void	ft_strcat(char *s1, char *s2)
//{
//	while (*s1)
//		s1++;
//	while (*s2)
//	{
//		*s1 = *s2;
//		s2++;
//		s1++;
//	}
//	*s1++ = '\0';
//}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ptr;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	ptr = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	str = ptr;
	while (*s1 != '\0')
		*ptr++ = *s1++;
	while (*s2 != '\0')
		*ptr++ = *s2++;
	*ptr = '\0';
	return (str);
}
