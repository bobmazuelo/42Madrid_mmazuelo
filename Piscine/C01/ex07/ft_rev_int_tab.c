/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:46:43 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/02 13:40:39 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	temp;

	count = 0;
	while (count < size / 2)
	{
		temp = *(tab + count);
		*(tab + count) = *(tab + (size - count) - 1);
		*(tab + (size - count) - 1) = temp;
		count++;
	}
}

