#include <stdio.h>

#define TAB_LENGTH 8

int main(void)
{
  int c;
  unsigned int line_pos = 0;
  unsigned int num_of_spaces = 0;

  while ((c = getchar()) != EOF)
  {
    ++line_pos;

    if (c == ' ')
    {
      ++num_of_spaces;

      if (line_pos % TAB_LENGTH == 0 && num_of_spaces > 1)
      {
        putchar('\t');
        num_of_spaces = 0;
      }
    }
    else
    {
      while (num_of_spaces)
      {
        putchar(' ');
        --num_of_spaces;
      }

      if (c == '\n')
      {
        line_pos = 0;
      }

      putchar(c);
    }
  }

  return 0;
}
