#include <stdio.h> 

int power(int nb, int pow)
{
  if (pow == 0)
    return (1);
  else if (pow == 1)
    return (nb);
    
  if (!(pow & 1))
    return (power(nb, pow >> 1) * power(nb, pow >> 1));
  else
    return (nb * power(nb, pow >> 1) * power(nb, pow >> 1));
}

int main() {
  printf("%i\n", power(2, 10));
  return 0;
}