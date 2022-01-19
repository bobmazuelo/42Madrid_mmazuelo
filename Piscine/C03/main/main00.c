/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:57:29 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/05 21:15:32 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	ft_strcmp(char	*s1, char	*s2);

int	main(void)
{
	printf("%d\n", ft_strcmp("asdf", "asdf"));
	printf("%d\n", ft_strcmp("asde", "asdf"));
	printf("%d\n", ft_strcmp("asdg", "asdf"));
	printf("%d\n", ft_strcmp("", ""));
	printf("%d\n", ft_strcmp("A", ""));
	printf("%d\n", ft_strcmp("", "A"));
	return (0);
}
