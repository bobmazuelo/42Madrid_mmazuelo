/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 01:52:39 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/02 19:40:01 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_flags(char *str, va_list fmt)
{
	str++;
	if (*str == '%')
		ft_putchar('%');
	else if (*str == 's')
		ft_str(fmt);
	else if (*str == 'c')
		ft_char(fmt);
	else if (*str == 'p')
		ft_ptr(fmt);
	else if (*str == 'x' || 'X')
		ft_hex(fmt, *str);
	else if (*str == 'i' || *str == 'd')
		ft_int(fmt);
	else if (*str == 'u')
		ft_unsigned(fmt);
	else if (*str == 'e')
		ft_scf(fmt);
	else if (*str == 'f')
		ft_float(fmt);
	else if (*str == 'o')
		ft_oct(fmt);
	else
		return (NULL);
}
