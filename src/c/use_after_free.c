#include <stdio.h>
#include <stdlib.h>

int main() {

  int *a = malloc(256);

  printf("Created Buffer...\n");

  free(a);

  printf("Dereference Buffer...\n");

  a[1] = 1;

  return 0;
}
