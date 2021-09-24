#include <stdio.h>

// Print the equivalent celcius for every fahrenheit value between 0 & 300 at intervals of 20
// C = (5/9)(F-32)

int main()
{
  int fahr, celcius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper)
  {
    celcius = 5 * (fahr - 32) / 9;
    printf("%3d\t%6d\n", fahr, celcius);
    fahr = fahr + step;
  }

  return 0;
}