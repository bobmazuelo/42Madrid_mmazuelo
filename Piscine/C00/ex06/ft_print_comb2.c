/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:48:23 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/01 16:06:22 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_print(int d1, int d2)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = d1 / 10 + 48;
	j = d1 % 10 + 48;
	k = d2 / 10 + 48;
	l = d2 % 10 + 48;
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, " ", 1);
	write(1, &k, 1);
	write(1, &l, 1);
	if (i != '9' || j != '8' || k != '9' || l != '9')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}	
}

void	ft_print_comb2(void)
{
	int	d1;
	int	d2;

	d2 = 1;
	d1 = 0;
	while (d1 < 100)
	{
		d2 = d1 + 1;
		while (d2 <= 99)
		{
			ft_print(d1, d2);
			d2++;
		}
		d1++;
	}
}
