/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 09:02:43 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/02/21 00:10:45 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *ftm, ...)
{
	int	done;
	va_list	args;
	char	*str_print;
	
	va_start(args, ftm);
	done = vprint(str_print, ftm, args);
	va_end(args);
	ft_putstr_fd(str_print, 1);
	return (done);
}
