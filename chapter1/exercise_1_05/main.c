#include <stdio.h>

int main(void)
{
  float celsius, fahr;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Celsius     Fahrenheit\n");
  printf("----------------------\n");

  for (celsius = upper; celsius >= lower; celsius = celsius - step)
  {
    fahr = (9.0 / 5.0) * celsius + 32.0f;
    printf("%3.0f\t\t%6.1f\n", celsius, fahr);
  }

  return 0;
}
