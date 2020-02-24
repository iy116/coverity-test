#include <stdio.h>
#include <stdlib.h>

int main() {

  int *a = NULL;

  printf("Assigning null pointer...");

  *a = 1;

  printf("a[0] = %i", a[0]);

  return 0;
}
