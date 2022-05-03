/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 21:24:23 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/06 16:41:53 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat();

int	main(void)
{
	char	test[256] = "asdf";
	char	test1[256] = "qwerty";
	char	test2[256] = "";
	printf("%s\n", ft_strcat(test, "asdf"));
	printf("%s\n", ft_strcat(test1, ""));
	printf("%s\n", ft_strcat(test2, "zxcv"));
	return (0);
}
