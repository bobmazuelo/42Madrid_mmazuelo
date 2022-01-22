/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:37:35 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/13 16:12:10 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	fact;
	int				i;

	fact = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		fact *= i;
		i++;
	}
	return (fact);
}
