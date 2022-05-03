/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:56:10 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/11/28 14:10:48 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
char	g_ast = '*';		// ASCII 42
char	g_sl_l = '\\';	// ASCII 92
char	g_sl_r = '/';	// ASCII 47
char	g_sp = ' ';		// ASCII 32
char	g_sn = '\n';		// ASCII 10
void	ft_putchar(char	c);

void	rush(int x, int y)
{
	int	anc;
	int	lar;

	lar = 1;
	while (lar <= y)
	{
		anc = 1;
		while (anc <= x)
		{
			if ((anc == 1 && lar == 1) || ((anc == x && lar == y)
					  && (anc != 1 && lar != 1)))
				ft_putchar(g_sl_r);
			else if ((anc == x && lar == 1) || (anc == 1 && lar == y))
				ft_putchar(g_sl_l);
			else if ((anc == 1 || lar == 1) || (anc == x || lar == y))
				ft_putchar(g_ast);
			else
				ft_putchar(g_sp);
			anc = anc + 1;
		}
		ft_putchar(g_sn);
		lar = lar + 1;
		anc = 1;
	}
}
