#include <stdio.h>

#define NUM_LETTERS 26 // a-z
#define NUM_NUMBERS 10 // 0-9

int main(void)
{
  char chars_freq[NUM_LETTERS + NUM_NUMBERS];

  for (int i = 0; i < (NUM_LETTERS + NUM_NUMBERS); ++i)
  {
    chars_freq[i] = 0;
  }

  char c;
  while ((c = getchar()) != EOF)
  {
    if (c >= 'a' && c <= 'z')
    {
      ++chars_freq[c - 'a'];
    }
    else if (c >= '0' && c <= '9')
    {
      ++chars_freq[c - '0' + NUM_LETTERS];
    }
  }

  for (int i = 0; i < (NUM_LETTERS + NUM_NUMBERS); ++i)
  {
    if (i < NUM_LETTERS)
    {
      printf("%c: ", 'a' + i);
    }
    else if (i >= NUM_LETTERS)
    {
      printf("%c: ", '0' + i - NUM_LETTERS);
    }

    int j;
    for (j = 0; j < chars_freq[i]; ++j)
    {
      printf("#");
    }

    putchar('\n');
  }

  return 0;
}