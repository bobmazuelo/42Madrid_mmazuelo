/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 19:33:23 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/05 22:15:22 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


char 		*ft_strstr(char *str, char *to_find);

int main(void)
{
    	printf("========================================================================================================================================================================================================================================\n\n\n\n\n");
	printf("C string.h - strstr\n");
	printf("%s\n", strstr("asdf qwerty", "wer"));
	printf("%s\n", strstr("asdf qwerty qwerty", "wer"));
	printf("%s\n", strstr("asdf qwerty", "qwerty1"));
	printf("%s\n", strstr("", "wer"));
	printf("%s\n", strstr("asdf qwerty", "zxcv"));
	printf("%s\n", strstr("asdf qwerty", ""));
	const char *s10 = "Foo Bar Baz";
	const char *s20 = "Bar";
	char *ptr;
	ptr = strstr(s10, s20);
	printf("%s\n", ptr);
	printf("\n\n\n");

	printf("Mi función - ft_strstr\n");
	printf("%s\n", ft_strstr("asdf qwerty", "wer"));
	printf("%s\n", ft_strstr("asdf qwerty qwerty", "wer"));
	printf("%s\n", ft_strstr("asdf qwerty", "qwerty1"));
	printf("%s\n", ft_strstr("", "wer"));
	printf("%s\n", ft_strstr("asdf qwerty", "zxcv"));
	printf("%s\n", ft_strstr("asdf qwerty", ""));
	char *s11 = "Foo Bar Baz";
	char *s21 = "Bar";
	char *ptr1;
	ptr1 = ft_strstr(s11, s21);
	printf("%s\n\n\n", ptr1);

    return(0);
}
