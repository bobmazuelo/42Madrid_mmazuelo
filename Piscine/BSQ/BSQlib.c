/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manhattan_dist.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:20:18 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/15 14:55:28 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQlib.h"

int	ft_abs(int nb)
{
	if (nb < 0)
		return (-nb);
	else
		return (nb);
}

int	ft_manhattan_dist(int x1, int y1, int x2, int y2)
{
	return (ft_abs(x1 - x2) + ft_abs(y1 - y2));
}

int	ft_sqrt(int nb)
{
	long	x;
	
	x = 0;
	while((x * x) <= nb)
		x++;
	if (x * x == nb)
		return (x);
	return (0);
}

void	read_table()
{};
