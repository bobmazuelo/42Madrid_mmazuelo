/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 12:38:23 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/15 15:30:11 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

char	*ft_sort_arg_tab(char **tab, int size)
{
	int	i;
	int	j;
	int	n;

	j = size;
	while (j)
	{
		i = 1;
		while (i < j)
		{
			n = ft_strcmp(tab[i], tab[i - 1]);
			if (n < 0)
			{
				*tab[i] = *tab[i] ^ *tab[i - 1];
				*tab[j] = *tab[i - 1] ^ *tab[i];
				*tab[i] = *tab[i] ^  *tab[i - 1];
			}
			i++;
		}
		j--;
	}
	return (*tab);
}

void	ft_print(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char	**argv)
{
	int	i;

	i = 1;
	if (argc == 0)
		return (0);
	ft_sort_arg_tab(argv, argc - 1);
	while (i < argc)
	{
		ft_print(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
