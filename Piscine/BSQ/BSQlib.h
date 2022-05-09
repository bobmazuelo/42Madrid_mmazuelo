/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQlib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 19:01:46 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/13 19:04:40 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQLIB_H
# define BSQLIB_H

typedef struct s_point {
	int	x;
	int	y;
}	t_point;


int	ft_abs(int nb);
int	ft_manhattan_dist(t_point a, t_point b);

#endif
