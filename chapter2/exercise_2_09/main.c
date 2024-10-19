#include <stdio.h>

int bitcount(unsigned int x);

int main(void)
{
    unsigned int x = 0b0111001;

    printf("%d\n", bitcount(x));
    return 0;
}

int bitcount(unsigned int x)
{
  int b = 0;

  while (x)
  {
    x &= (x - 1);
    ++b;
  }

  return b;
}