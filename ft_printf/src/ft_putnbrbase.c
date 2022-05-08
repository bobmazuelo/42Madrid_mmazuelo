/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:41:25 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/08 19:41:00 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_num(long long num, int base_l, char *base, int done)
{
	
	if (num >= base_l)
		ft_print_num(num / base_l, base_l, base, done);
	return(done += ft_char(base[num % base_l]));
}
