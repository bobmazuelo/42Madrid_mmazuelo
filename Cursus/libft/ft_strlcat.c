/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:54:55 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/01/23 20:54:55 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strnlen();

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    const size_t srclen = ft_strlen(src);
    const size_t dstlen = ft_strnlen(dst, size);

    if (dstlen == size) 
        return size + srclen;
    if (srclen < size - dstlen) {
        ft_memcpy(dst + dstlen, src, srclen + 1);
    } else {
        ft_memcpy(dst + dstlen, src, size - 1);
        dst[dstlen + size - 1] = '\0';
    }
    return (dstlen + srclen);
}





size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	len = i;
	while (src[i - len] && i + 1 < dstsize)
	{
		dst[i] = src[i - len];
		i++;
	}
	if (len < dstsize)
		dst[i] = '\0';
	return (len + ft_strlen(src));
}