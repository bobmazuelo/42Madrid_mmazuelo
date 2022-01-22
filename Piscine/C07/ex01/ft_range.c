/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:25:43 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/15 16:14:46 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*arr;

	if (min >= max)
		return (NULL);
	size = (max - min) + 1;
	arr = malloc(size * sizeof(int));
	i = 0;
	while (size)
	{
		arr[i] = min;
		min++;
		i++;
		size--;
	}
	arr[i] = 0;
	return (arr);
}
