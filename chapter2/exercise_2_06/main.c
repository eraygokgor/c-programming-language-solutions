#include <stdio.h>

unsigned int setbits(int x, int p, int n, int y);

int main(void)
{
  unsigned int x = 0b11111111;
  unsigned int y = 0b0110;

  printf("%d\n", setbits(x, 3, 4, y));

  return 0;
}

unsigned int setbits(int x, int p, int n, int y)
{
  return (~(~(~0 << n) << p) & x) | (~(~0 << n) & y) << p;
}