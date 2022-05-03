/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:05:59 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/01 16:07:22 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	power(int x, unsigned int y)
{
	if (y == 0)
		return (1);
	else if (y % 2 == 0)
		return (power(x, y / 2) * power(x, y / 2));
	else
		return (x * power(x, y / 2) * power(x, y / 2));
}

void	ft_print(int num)
{
	if (num > 9)
	{
		ft_print(num / 10);
		ft_print(num % 10);
	}
	else
	{
		num = num + 48;
		write(1, &num, 1);
	}
}

int	len(int n)
{
	int	count;

	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

void	ft_print_combn(int n)
{
	if (n > 0 && n < 10)
	{
		while ()
		{
		}
	}
}
