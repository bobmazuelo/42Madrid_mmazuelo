/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 21:40:44 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/06 15:27:45 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlcat(char *dest, char *str, unsigned int size);

int	main(void)
{
	char str1[256] = "Hola ";
	char str2[256] = "Mundo!";

	ft_strlcat(str1, str2, 2);
	printf("%d\n", str1);

	return (0);
}
