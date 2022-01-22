/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmazuelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:59:04 by mmazuelo          #+#    #+#             */
/*   Updated: 2021/12/15 16:15:32 by mmazuelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>
#define MAX_INT 2147483647

int *ft_range(int min, int max);

void    test(int min, int max)
{
    int *r;
    int i;
    printf("range(%i, %i) = {", min, max);
    fflush(stdout);
    r = ft_range(min, max);
    if (r != NULL)
    {
        i = 0;
        printf("%i", r[i++]);
        while (i < 24)
        {
            printf(", %i", r[i++]);
        }
    }
    printf("}\n");
    free(r);
}
int main(void)
{
    test(1, 5);
    test(-9, 5);
    test(-10, 10);
    test(MAX_INT - 5, MAX_INT);
    test(-MAX_INT - 1, -MAX_INT + 4);
    test(2, 2);
    test(-2, -4);
    test(3, 10);
}

