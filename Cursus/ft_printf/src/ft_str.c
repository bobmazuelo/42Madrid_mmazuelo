/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:38:43 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/08 19:36:21 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_str(char *str)
{
	int	done;

	done = 0;
	if (str == NULL)
		str = "(null)";
	while (*str != '\0')
		done += ft_char(*str++);
	return (done);
}
