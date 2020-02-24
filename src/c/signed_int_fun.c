#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {

  int max = INT_MAX;
  int min = INT_MIN;

  if (max + 1 < 0) {
    printf("Overflow!\n");
  }

  if (min - 1 > 0) {
    printf("Underflow!\n");
  }

  return 0;
}
