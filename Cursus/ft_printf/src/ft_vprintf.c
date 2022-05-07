/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 00:26:02 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/07 13:29:37 by mmazuelo         ###   ########.fr       */
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
		{
			done = ft_flags(fmt, args);
			if (done == 1)
				fmt+=2;
		}
		else
			write(1, fmt++, 1);
	}
	return (done);
}

int	ft_flags(const char *str, va_list args)
{
	int	done;

	done = 0;
	str++;
	if (*str == '%')
		done = ft_char('%');
	else if (*str == 's')
		done = ft_str(va_arg(args, char *));
	else if (*str == 'c')
		done = ft_char(va_arg(args, int));
	else if (*str == 'p')
		done = ft_ptr(va_arg(args, unsigned long long));
	else if (*str == 'x' || *str == 'X')
		done = ft_hex(va_arg(args, unsigned int), *str);
	else if (*str == 'i' || *str == 'd')
		done = ft_int(va_arg(args, int));
	else if (*str == 'u')
		done = ft_unsigned(va_arg(args, unsigned int));
	else if (*str == 'o')
		done = ft_oct(va_arg(args, unsigned int));
	return (done);
}
