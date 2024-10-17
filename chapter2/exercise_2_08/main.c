#include <stdio.h>
#include <math.h>


unsigned int rightrot(unsigned x, int n);
int wordlength(void);

int main(void)
{
  unsigned int x = 0b11110101;

  printf("%d\n", rightrot(x, 5));

  return 0;
}

int wordlength(void)
{
    int i;
    unsigned v = (unsigned) ~0;
    for (i = 1; (v = v >> 1) > 0; i++)
        ;
    return i;
}

unsigned rightrot(unsigned x, int n)
{
    int worldlength(void);
    int rbit;

    while (n-- > 0)
    {
        rbit = (x & 1) << (wordlength() - 1);
        x = x >> 1;
        x = x | rbit;
    }
    return x;
}
