/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:31:20 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/15 22:49:28 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	check_nl(char *str)
{
	while (*str)
	{
		if (*str == 10)
			return (1);
		str++;
	}
	return (0);
}

size_t	ft_strclen(const char *str, int c)
{
	const char	*ptr;

	ptr = str;
	while (*ptr ^ c && *ptr ^ 0)
		ptr++;
	return (ptr - str);
}

char	*ft_join(char const *s1, char const *s2)
{
	char	*ptr;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	ptr = malloc((ft_strclen(s1, 0) + ft_strclen(s1, 0) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	str = ptr;
	while (*s1 ^ 0)
		*ptr++ = *s1++;
	while (*s2 ^ 0)
		*ptr++ = *s2++;
	*ptr = 0;
	return (str);
}

char	*ft_strdup(const char *str)
{
	char	*s;

	s = malloc(ft_strclen(str, 0) + 1);
	if (!str || !s)
		return (NULL);
	while (*str)
		*s++ = *str++;
	s = 0;
	return (s);
}

char	*ft_strchr(const char *str, int c)
{
	while (*str ^ c && *str ^ 0)
		str++;
	if (*str == c)
		return ((char *)str);
	return (NULL);
}
