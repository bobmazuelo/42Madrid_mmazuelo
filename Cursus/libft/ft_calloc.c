/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 09:36:32 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/02/02 09:36:32 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdlib.h>

void    *ft_calloc(size_t nelem, size_t elsize)
{
    void            *call;
    unsigned char	*ptr;
    
    call = malloc(nelem * elsize)
    if (!call)
        return (0);
	ptr = call;
	while (n > 0)
	{
		*ptr++ = 0;
		n--;
	}
    return (call);
}