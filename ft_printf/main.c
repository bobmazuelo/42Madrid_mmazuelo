/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 11:37:34 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/08 18:51:16 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	res;
	int	res1;

	res = ft_printf("%d\n", -2111);
	res1 = printf("%d\n", -2111);
	printf("%d - %d\n", res, res1);
	return (0);
}
