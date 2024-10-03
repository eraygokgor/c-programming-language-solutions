#include <stdio.h>

float fahr_to_cels(int fahr);

int main(void)
{
    float fahr, cels;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (cels <= upper)
    {
        fahr = fahr_to_cels(cels);
        printf("%3.0f\t\t%6.1f\n", cels, fahr);
        cels += step;
    }

  return 0;
}

float fahr_to_cels(int fahr)
{
    return (5.0 * (fahr - 32.0f)) / 9.0;
}