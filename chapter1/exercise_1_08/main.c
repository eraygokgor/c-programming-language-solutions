#include <stdio.h>

int main(void)
{
  int blanks = 0;
  int tabs = 0;
  int newlines = 0;
  int total = 0;

  int c;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      ++blanks;
    }
    else if (c == '\t')
    {
      ++tabs;
    }
    else if (c == '\n')
    {
      ++newlines;
    }
  }

  total = blanks + tabs + newlines;

  printf("blanks: %d\ntabs: %d\nnewlines: %d\ntotal: %d\n",
         blanks, tabs, newlines, total);

  return 0;
}