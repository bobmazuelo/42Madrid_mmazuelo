/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:37:04 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/01/27 21:37:04 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t    ft_strnlen(const char *str, size_t size)
{
    const char  *ptr;
    int            i;

    ptr = str;
    i = 0;
    while (*ptr != '\0' && i < size)
    {
      ptr++; 
      i++;
    }
    return (i);
}