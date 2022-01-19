/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 21:18:29 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/06 16:37:59 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char	*s1, char	*s2, unsigned int	n);

int	main(void)
{
	printf("%d\n", ft_strncmp("asdf", "asdf", 4));
	printf("%d\n", ft_strncmp("asde", "asdf", 4));
	printf("%d\n", ft_strncmp("asdg", "asdf", 4));
	printf("%d\n", ft_strncmp("asdf", "asdf", 3));
	printf("%d\n", ft_strncmp("asde", "asdf", 3));
	printf("%d\n", ft_strncmp("", "", 0));
	return (0);
}
