#include <stdio.h>

int main(void)
{
  int c;
  int last_c = '0';

  while ((c = getchar()) != EOF)
  {
    if (c != ' ')
      putchar(c);
    if (c == ' ')
      if (last_c != ' ')
        putchar(c);
    last_c = c;
  }

  return 0;
}