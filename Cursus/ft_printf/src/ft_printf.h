/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:02:37 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/02 18:11:47 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft/libft.h"
#include <stdarg.h>

int	ft_vprintf(const char *fmt, va_list args);
int	ft_char(int c);
int	ft_float();
int	ft_hex(unsigned int nb, char str);
int	ft_int();
int	ft_oct(unsigned int nb);
int	ft_ptr();
int	ft_str();
int	ft_unsigned();

void	ft_print_num(long long num, int base_l, char *base);

#endif
