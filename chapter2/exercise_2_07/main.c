#include <stdio.h>

unsigned int invert(unsigned int x, int p, int n);

int main(void)
{
  unsigned int x = 0b11010111;
  
  printf("%d\n", invert(x, 1, 4));

  return 0;
}

unsigned int invert(unsigned int x, int p, int n)
{
  unsigned int a = ~(~0 << n) << p;
  unsigned int b = ~a & x;

  return b | ~x;
}