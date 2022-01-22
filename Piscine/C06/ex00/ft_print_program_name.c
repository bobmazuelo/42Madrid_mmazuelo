/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:32:24 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/10 14:27:01 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*ptr;

	ptr = argv[0];
	while (*ptr)
	{
		write(1, ptr, 1);
		ptr++;
	}
	write(1, "\n", 1);
	return (argc);
}
