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

int	ft_printf(const char *fmt, ...);
int	ft_vprintf(const char *fmt, va_list args);
int	ft_char(int c);
int	ft_hex(unsigned int nb, char str);
int	ft_int(int nb);
int	ft_oct(unsigned int nb);
int	ft_ptr(unsigned long long ptr);
int	ft_str(char *str);
int	ft_unsigned(unsigned int nb);

void	ft_print_num(long long num, int base_l, char *base);

#endif
