#include <stdio.h>
#include <stdlib.h>

int main() {

  int *a = malloc(10);

  a[9] = 5;
  a[10] = 5;

  printf("a[9] = %i\n", a[9]);
  printf("a[10] = %i\n", a[10]);

  return 0;
}
