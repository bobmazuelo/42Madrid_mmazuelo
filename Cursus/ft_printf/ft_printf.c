/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 00:51:05 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/02/28 00:51:45 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int	done;
	char	*str_print;
	
	if (fmt == NULL)
		return (0);
	va_start(args, fmt);
	done = ft_vprint(str_print, fmt, args);
	va_end(args);
	ft_putstr_fd(str_print, 1);
	return (done);
}
