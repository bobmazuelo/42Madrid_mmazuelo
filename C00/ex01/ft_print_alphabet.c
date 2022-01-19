/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:42:50 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/11/27 18:52:11 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_print_alphabet(void)
{
	int	alpha;

	alpha = 97;
	while (alpha <= 122)
	{
		write(1, &alpha, 1);
		alpha = alpha + 1;
	}
}
