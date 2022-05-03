/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:37:59 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/06 15:43:19 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
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
	*(dest+i) = '\0';
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



unsigned int	*ft_strlcat(char *dest, char *src, unsigned int  size)
{ 
    unsigned int	len1 = ft_strlen(dest);
    unsigned int	len2 = ft_strlen(src);

    if (len2 < size)
   	{
	ft_strcpy((dest + len1), src);
    }
	else
   	{
	ft_strncpy((dest + len1), src, size);
	*(dest + (len1 + size)) = '\0';
    }
    return (unsigned int)(ft_strlen(dest));
}
