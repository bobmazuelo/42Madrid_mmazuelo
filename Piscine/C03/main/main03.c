/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 21:40:44 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/06 14:34:28 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


char	*ft_strncat(char *s1, char *s2, unsigned int nb);

int	main(void)
{
	char str1[256] = "Hola ";
	char str2[256] = "Mundo!";

	ft_strncat(str1, str2, 2);
	printf("%s\n", str1);

	return (0);
}
