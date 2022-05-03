/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 00:51:05 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/02 20:22:51 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		done;

	if (fmt == NULL)
		return (0);
	va_start(args, fmt);
	done = ft_vprintf(fmt, args);
	va_end(args);
	return (done);
}
