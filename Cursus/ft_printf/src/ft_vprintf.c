/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 00:26:02 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/02 20:24:19 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_flags(const char *str, va_list args);

int	ft_vprintf(const char *fmt, va_list args)
{
	int	done;

	done = 0;
	if (!fmt)
		return (0);
	while (*fmt != '\0')
	{
		if (*fmt == '%')
			ft_flags(fmt, args);
		else
			fmt++;
	}
	return (done);
}

int	ft_flags(const char *str, va_list args)
{
	int	done;

	done = 0;
	str++;
	if (*str == '%')
		done += ft_char('%');
	else if (*str == 's')
		done += ft_str(va_arg(args, char *));
	else if (*str == 'c')
		done += ft_char(va_arg(args, int));
	else if (*str == 'p')
		done += ft_ptr(va_arg(args, unsigned long int));
	else if (*str == 'x' || 'X')
		done += ft_hex(va_arg(args, unsigned int), *str);
	else if (*str == 'i' || *str == 'd')
		done += ft_int(va_arg(args, int));
	else if (*str == 'u')
		done += ft_unsigned(va_arg(args, unsigned int));
	else if (*str == 'd')
		done += ft_float(va_arg(args, double));
	else if (*str == 'o')
		done += ft_oct(va_arg(args, unsigned int));
	return (done);
}
