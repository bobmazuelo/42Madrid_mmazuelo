/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:31:09 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/02/14 18:53:06 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s) + 1;
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	return (ft_memcpy(ptr, s, len));
}
/*
char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;
	
	i = 0;
	str = malloc(ft_strlen(s) + 1);
	if (!s || !str)
		return (NULL);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
*/
