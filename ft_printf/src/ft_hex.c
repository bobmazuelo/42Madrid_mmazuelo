/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:37:28 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/07 17:11:58 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned int nb, char str)
{
	if (str == 'x')
		return(ft_print_num(nb, 16, "0123456789abcdef", 1));
	else
		return(ft_print_num(nb, 16, "0123456789ABCDEF", 1));
}
