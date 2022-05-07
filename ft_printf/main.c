/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 11:37:34 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/05/07 17:14:47 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int i = 65;
	int res = ft_printf("%p\n", &i);
	int res1 = printf("%p\n", &i);
	printf("%d - %d\n", res, res1);

	return (0);
}
