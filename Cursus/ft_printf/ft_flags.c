/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 01:52:39 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/02 17:57:20 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_flags(char *str, va_list fmt)
{
	str++;
	if (*str == '%')
		ft_putchar('%');
	else if (*str == 'd')
		ft_interger(fmt);
	else if (*str == 's')
		ft_string(fmt);
	else if (*str == 'c')
		ft_char(fmt);
	else if (*str == 'p')
		ft_pointer(fmt);
	else if (*str == 'x' || 'X')
		ft_hexa(fmt, *str);
	else if (*str == 'i' || *str == 'd')
		ft_int(fmt);
	else if (*str == 'u')
		ft_unsigned(fmt);
	else if (*str == 'e')
		ft_scientific(fmt);
	else if (*str == 'f')
		ft_float(fmt);
	else if (*str == 'o')
		ft_octal(fmt);
}
