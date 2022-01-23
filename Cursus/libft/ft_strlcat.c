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

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    const size_t srclen = ft_strlen(src);
    const size_t dstlen = strnlen(dst, size); // deshacerme de esta función y entender el funcionamiento de strlcat

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