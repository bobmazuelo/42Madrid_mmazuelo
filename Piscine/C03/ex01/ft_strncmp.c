/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:45:04 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/05 17:35:21 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	b;

	b = 0;
	while (((*s1 != '\0' && *s2 != '\0') && *s1 == *s2) && b < n)
	{
		s1++;
		s2++;
		b++;
	}
	if (*s1 == *s2)
		return (0);
	if (b != n)
		return (*s1 - *s2);
	return (0);
}
