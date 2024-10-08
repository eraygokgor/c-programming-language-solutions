#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
  printf("UNSIGNED CHAR MAX: %d\n", UCHAR_MAX);
  printf("SIGNED CHAR MIN: %d\n", SCHAR_MIN);
  printf("SIGNED CHAR MAX: %d\n", SCHAR_MAX);
  printf("\n");

  printf("UNSIGNED SHORT MAX: %u\n", USHRT_MAX);
  printf("SIGNED SHORT MIN: %d\n", SHRT_MIN);
  printf("SIGNED SHORT MAX: %d\n", SHRT_MAX);
  printf("\n");

  printf("UNSIGNED INT MAX: %u\n", UINT_MAX);
  printf("SIGNED INT MIN: %d\n", INT_MIN);
  printf("SIGNED INT MAX: %d\n", INT_MAX);
  printf("\n");

  printf("UNSIGNED LONG MAX: %lu\n", ULONG_MAX);
  printf("SIGNED LONG MIN: %ld\n", LONG_MIN);
  printf("SIGNED LONG MAX: %ld\n", LONG_MAX);
  printf("\n");

  printf("UNSIGNED LONG MAX: %lu\n", ULONG_MAX);
  printf("SIGNED LONG MIN: %ld\n", LONG_MIN);
  printf("SIGNED LONG MAX: %ld\n", LONG_MAX);
  printf("\n");

  printf("FLOAT MIN: %f\n", FLT_MIN);
  printf("FLOAT MAX: %f\n", FLT_MAX);
  printf("\n");

  return 0;
}