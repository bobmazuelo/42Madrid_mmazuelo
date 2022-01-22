/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:17:40 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/15 16:37:34 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int	size;

	i = 0;
	size = (max - min);
	if ( min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = malloc(size * sizeof(int));

