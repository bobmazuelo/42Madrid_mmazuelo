/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:40:10 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/08 15:35:32 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_alphanum(char s)
{
	if (s >= '0' && s <= 'z')
	{
		if ((s >= '0' && s <= '9')
			|| (s >= 'A' && s <= 'Z')
			|| (s >= 'a' && s <= 'z'))
			return (1);
		else
			return (0);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*ptr;

	ptr = str;
	if (ft_str_alphanum(*str))
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
	str++;
	while (*str)
	{
		if (ft_str_alphanum(*(str - 1)))
		{
			if (*str >= 'A' && *str <= 'Z')
				*str += 32;
		}
		else if (ft_str_alphanum(*str))
		{
			if (*str >= 'a' && *str <= 'z')
				*str = *str - 32;
		}
		str++;
	}
	return (ptr);
}
