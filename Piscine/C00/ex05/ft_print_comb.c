/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 20:02:17 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/01 15:03:05 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_print(int i, int	j, int	k)
{
	if (i == '7' && j == '8' && k == '9')
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, &k, 1);
	}
	else
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, &k, 1);
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	j = '1';
	k = '2';
	while (i < '7' + 1)
	{
		while (j < '8' + 1)
		{
			while (k < '9' + 1)
			{
				ft_print(i, j, k);
				k++;
			}
			k = ++j + 1;
		}
		j = ++i;
	}
}
