/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:22:43 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/02/09 12:22:43 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	ptr = malloc((len + 1) * sizeof(char *));
	if (!s || !ptr)
		return (NULL);
	while (s[i] != '\0' && j < len && start < len)
}
