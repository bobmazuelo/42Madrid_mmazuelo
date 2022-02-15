/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 11:25:32 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/02/03 20:37:50 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	num;
	int		sign;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == 0x20 || (str[i] >= 0x09 && str[i] <= 0x0D))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (str[i] & 0xF) + (num * 10);
		i++;
	}
	if ((long int)(num * sign) < INT_MIN)
		return (0);
	else if ((long int)(num * sign) > INT_MAX)
		return (-1);
	return ((int)(num * sign));
}
