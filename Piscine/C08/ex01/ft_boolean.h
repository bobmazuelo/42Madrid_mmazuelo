/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 17:46:32 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/16 17:49:28 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include	<unistd.h>

# define	TRUE 1
# define	FALSE 0
# define	SUCCESS 0
# define	EVEN(n) ((n) % 2 == 0)
# define	EVEN_MSG "I have an even number of arguments.\n"
# define	ODD_MSG "I have an odd number of arguments.\n"
typedef int		t_bool;

#endif
