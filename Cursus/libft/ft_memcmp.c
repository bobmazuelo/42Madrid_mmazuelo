/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:13:10 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/01/30 17:27:29 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;
	int				i;

	i = 0;
	while (n > 0)
	{
		c1 = *((unsigned char *)s1 + i);
		c2 = *((unsigned char *)s2 + i);
		if (c1 != c2)
			return (c1 - c2);
		if (c1 == '\0')
			return (0);
		n--;
		i++;
	}
	return (0);
}
