/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:37:47 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/08 19:44:51 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int(int nb)
{
	int	done;

	done = 0;
	if (nb < 0)
	{
		done = ft_char('-');
		nb *= -1;
	}
	return (ft_print_num(nb, 10, "0123456789", done));
}