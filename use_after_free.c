#include <stdio.h>

int main()
{
  char *p;

  // Allocation #1 of 19 bytes
  p = (char *) malloc(19);
  free(p);

  // Allocation #2 of 12 bytes
  p = (char *) malloc(12);
  free(p);
  printf(p);

  // Allocation #3 of 0 bytes
  p = (char *) malloc(0);
  free(p);

  return 0;
}
