/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:38:03 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/08 22:30:12 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long pointer, int *done)
{
	if (pointer == 0)
		return (*done);
	ft_pointer(pointer / 16, done);
	if ((pointer % 16) <= 9)
		*done += ft_char((pointer % 16) + 0x30);
	else if ((pointer % 16) >= 10)
		*done += ft_char((pointer % 16) + 0x57);
	return (*done);
}

int	ft_ptr(void *ptr)
{
	unsigned long	pointer;
	int				done;

	done = 2;
	pointer = (unsigned long) ptr;
	if (pointer == 0)
		return (ft_str("(nil)"));
	ft_str("0x");
	return (ft_pointer(pointer, &done));
}
