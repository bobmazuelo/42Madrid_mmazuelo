/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:01:15 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/14 12:40:50 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(char	*str)
{
	if (*str == 0)
		return (0);
	else
		return (1 + ft_strlen(str + 1));
}

char	*ft_strdup(char *src)
{
	char				*ptr;
	unsigned int		n;
	int					i;

	i = 0;
	n = ft_strlen(src) + 1;
	ptr = malloc(n * sizeof(char));
	while(src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
