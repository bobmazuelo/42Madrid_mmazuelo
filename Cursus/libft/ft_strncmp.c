/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 20:22:56 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/01/28 20:22:56 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    char c1;
    char c2;
    
    while (n > 0)
    {
        c1 = *str1++;   
        c2 = *str2++;
        if (c1 != c2)
            return (c1 - c2);
        if (c1 == '\0')
            return (0);
        n--;
    }
    return (0);
}