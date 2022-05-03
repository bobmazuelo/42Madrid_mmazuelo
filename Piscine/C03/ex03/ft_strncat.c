/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:11:28 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/08 18:11:09 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	len1;
	unsigned int	len2;

	len1 = ft_strlen(dest);
	len2 = ft_strlen(src);
	if (len2 < n)
		ft_strcpy((dest + len1), src);
	else
	{
		ft_strncpy((dest + len1), src, n);
		*(dest + (len1 + n)) = '\0';
	}
	return (dest);
}
