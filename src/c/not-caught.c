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

void outOfBounds3() {
  int arr[2];
  arr[rand() + 10] = 999;
}

void outOfBounds4(int i) {
  int arr[2];
  arr[i * i + 10] = 999;
}


int main() {
  outOfBounds2();
  intOverflow();
  outOfBounds3();
  outOfBounds4(1);

  return 0;
}
