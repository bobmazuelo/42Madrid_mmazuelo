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

int	ft_manhattan_dist(t_point a, t_point b)
{
	return (ft_abs(b.x - a.x) + ft_abs(b.y - b.a));
}

void	read_table()
{};
