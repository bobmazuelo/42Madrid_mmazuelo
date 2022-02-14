/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:22:43 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/02/14 21:08:23 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	sub_len;
	char	*dest;

	sub_len = ft_strlen(s);
	j = start;
	if (len > sub_len)
		len = sub_len;
	dest = malloc((len + 1) * sizeof(char));
	if (!s || !dest)
		return(NULL);
	i = 0;
	if (j < ft_strlen(s))
		while (i < len)
		{
			dest[i] = s[j];
			i++;
			j++;
		}
	dest[i] = '\0';
	return (dest);
}
