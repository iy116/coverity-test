#include <stdio.h>
#include <stdlib.h>

void outOfBounds2() {
  int *a = (int *)malloc(2 * sizeof(int));
  a[9] = 999;
  free(a);
}

void intOverflow() {
    int a = 2147483647;
    a = a + 1;
    printf("%d", a);
}

// Dynamic input.
void dynamicInputOutOfBounds(int i) {
  int arr[2];
  arr[i * i + 10] = 999;
}


int main() {
  outOfBounds2();
  intOverflow();
  dynamicInputOutOfBounds(1);

  return 0;
}
