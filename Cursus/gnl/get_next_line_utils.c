/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:31:20 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/09 19:34:36 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strclen(const char *str, int c)
{
	const char	*ptr;

	ptr = *str;
	while (*ptr ^ c || *ptr ^ 0)
		ptr++;
	return (ptr - str);
}
