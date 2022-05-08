/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:38:03 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/08 17:08:30 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long pointer, int done)
{
	if (pointer == 0)
		return 1;
	ft_pointer(pointer / 16, done);
	if ((pointer % 16) <= 9)
		ft_putchar_fd((pointer % 16) + 0x30, 1);
	else if ((pointer % 16) >= 10)
		ft_putchar_fd((pointer % 16) + 0x57, 1);
	return (done);
}

int	ft_ptr(void *ptr)
{
	unsigned long pointer;

	pointer = (unsigned long) ptr;
	ft_putstr_fd("0x", 1);
	if (pointer == 0)
		ft_putchar_fd('0',1);
	return(ft_pointer(pointer, 2));
}


/*
int	ft_ptr(void *ptr)
{
	ft_putstr_fd("0x", 1);
	return(ft_hex((unsigned long)ptr, 'x') + 2);
}
*/
