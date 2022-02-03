/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 09:36:32 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/02/03 18:16:40 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void			*call;
	unsigned char	*ptr;

	call = malloc(count * size);
	if (!call)
		return (0);
	ptr = call;
	while (size > 0)
	{
		*ptr++ = 0;
		size--;
	}
	return (call);
}
