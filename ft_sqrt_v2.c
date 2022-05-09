#include <stdio.h>

double    ft_sqrt(int nb)
{
    double    n;
    int       i;

    n = nb * .2;
    i = 0;
    if (nb < 0)
        return (0);
        
    while (n != nb/n && i <= 20)
    {
        n = n + (nb - n * n) / (2 * n);
        ++i;
    }
    printf("%i - ", i);
    return (n);
}

int main()
{
    printf("%.16f", ft_sqrt(2));

    return 0;
}