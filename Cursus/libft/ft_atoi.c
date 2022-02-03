/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 11:25:32 by mmazuelo          #+#    #+#             */
/*   Updated: 2022/02/03 17:44:59 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	return ((int)(sign * num));
}
/*
int string_to_number(const char *src) {
  int     i;
  int     sign;
  int     num;

  i = 0;
  sign = 1;
  num = 0;
  while (src[i] == '-' || src[i] == '+')
  {
    if (src[i] == '-')
      sign *= -1;
    i++;
  }
  while (src[i] >= '0' && src[i] <= '9')
  {
    num = (src[i] - '0') + (num * 10);
    i++;
  }
  return ((int)(sign * num));
}

int string_to_number(const char *src)
{
  int to_dec = 0;
  char n = 0;
  
  if (n = (*src == '-'))
      src++;
  
  while (*src && *src >= '0' && *src <= '9') {
    to_dec *= 10;
    to_dec += *(src)++ & 0xF;
  }
  
  return ((n == 1) ? -(to_dec) : to_dec);
}
*/
