/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:37:01 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/02 19:54:27 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_char(int chr)
{
	ft_putchr_fd(chr, 1);
	return (1);
}

/*
 * Mirar en printf si chr se lw puede meter o no el fd
 */

