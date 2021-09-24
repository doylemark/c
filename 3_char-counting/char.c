#include <stdio.h>

/* count characters in an input */
int main()
{
  double nc;
  // EOF is an int from standard library
  while (getchar() != EOF)
  {
    ++nc;
  }

  printf("%.0f", nc);

  return 0;
}
