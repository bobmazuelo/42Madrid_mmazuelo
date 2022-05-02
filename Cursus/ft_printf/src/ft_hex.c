/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:37:28 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/02 19:47:20 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned int nb, char *str)
{
	if (*str == 'x')
	{
		ft_putnbrbase(nb. "0123456789abcdef");
		return (0);
	}
	else
	{
		ft_putnbrbase(nb. "0123456789ABCDEF");
		return (0);
	}
	
}
