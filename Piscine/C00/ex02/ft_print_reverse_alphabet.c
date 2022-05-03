/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:53:20 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/01 13:15:53 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_print_reverse_alphabet(void)
{
	int	alpha;

	alpha = 122;
	while (alpha >= 97)
	{
		write(1, &alpha, 1);
		alpha = alpha - 1;
	}
}
