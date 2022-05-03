/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:25:50 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/13 16:20:37 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power % 2 == 0)
		return (ft_recursive_power(nb, power >> 1)
			* ft_recursive_power(nb, power >> 1));
	else
		return (nb * ft_recursive_power(nb, power >> 1)
			* ft_recursive_power(nb, power >> 1));
}
*/

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
