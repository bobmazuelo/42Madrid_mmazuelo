/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:20:54 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/10 14:32:06 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	if (argc == 0)
		return (0);
	while (i != 0)
	{
		ft_print(argv[i]);
		i--;
		write(1, "\n", 1);
	}
	return (0);
}
