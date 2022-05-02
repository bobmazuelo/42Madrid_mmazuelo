/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 01:52:39 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/02 20:19:56 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_flags(char *str, va_list args)
{
	int	len;

	len = 0;
	str++;
	if (*str == '%')
		len += ft_putchar('%');
	else if (*str == 's')
		ft_str(va_arg(args));
	else if (*str == 'c')
		ft_char(va_arg(args));
	else if (*str == 'p')
		ft_ptr(va_arg(args));
	else if (*str == 'x' || 'X')
		ft_hex(va_arg(args), *str);
	else if (*str == 'i' || *str == 'd')
		ft_int(va_arg(args));
	else if (*str == 'u')
		ft_unsigned(va_arg(args));
	else if (*str == 'e')
		ft_scf(va_arg(args));
	else if (*str == 'f')
		ft_float(va_arg(args));
	else if (*str == 'o')
		ft_oct(va_arg(args));
	return (len);
}
