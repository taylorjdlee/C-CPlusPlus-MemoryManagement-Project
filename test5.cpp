#include <stdio.h>
#include <stdlib.h>

int main()
{
  char *p;

  // Allocation #1 of 19 bytes
  p = new char[19];
  free(p);

  // Allocation #2 of 12 bytes
  p = (char *) malloc(12);
  delete p;

  // Allocation #3 of 16 bytes
  p = (char *) malloc(16);
  free(p);

  return 0;
}
