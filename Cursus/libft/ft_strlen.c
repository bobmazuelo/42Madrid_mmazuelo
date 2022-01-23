/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 11:45:58 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/01/22 16:48:43 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

/*
 * Termux-Vim
 *
 * #include <stdio.h>
 *
 * size_t	ft_strlen(const char *str)
 * {
 * 		const char *ptr;
 *
 * 		ptr = str;
 * 		while (*ptr)
 * 			ptr++;
 * 		return (ptr - str);
 * }
 *
 * int		main(void)
 * {		char txt[256] = "Hola chico"; //10
 * 		size_t n = ft_strlen(txt);
 * 		printf("%zu\n", n);
 * 		return (0);
 * }
 */

