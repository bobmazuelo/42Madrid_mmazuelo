/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:35:06 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/02/16 19:31:44 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	*scan_delim(char const *s, char c, size_t len)
{
	int	*idx = malloc(len * sizeof(int));
	int	pos;
	int	i;

	pos = 0;
	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
			idx[i++] = pos;
		pos++;
		s++;
	}
	return (idx);
}

char **ft_split(char const *s, char c)
{
	char **ptr;
	int *n = scan_delim(s, c, strlen(s));
	size_t len = sizeof(n)/sizeof(int);
	int i;

	ptr = malloc(sizeof(char*) * len);
	if (!s || !ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = ft_substr(s, n[i], n[i + 1] - n[i]);
		i++;
	}
	return (ptr);
}
