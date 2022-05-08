/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:38:43 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/08 19:36:21 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_str(char *str)
{
	if (str == NULL)
	{
		str = "(null)";
		ft_putstr_fd(str, 1);
		return (ft_strlen(str));
	}
	else
		ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
