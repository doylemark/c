#include <stdio.h>
#include <stdlib.h>

/* read a file line by line and printing the line each iteration */
int main()
{
  FILE *f;
  char *line = NULL;
  size_t len = 0;
  ssize_t read;

  f = fopen("./sample.txt", "r+");

  if (f == NULL)
  {
    printf("Could not open sample.txt");
    exit(1);
  }

  while ((read = getline(&line, &len, f)) != -1)
  {
    printf("%s", line);
  }

  fclose(f);
  free(line);

  return 0;
}
