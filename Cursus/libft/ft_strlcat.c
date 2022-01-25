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

#define FT_STRNLEN(dst, size) (sizeof(dst) / sizeof(*(dst))) - size

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    const size_t srclen = ft_strlen(src);
    const size_t dstlen = FT_STRNLEN(dst, size);

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