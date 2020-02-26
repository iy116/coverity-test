#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bufferOverflow() {
  char buffer[5];
  char c[] = "Hello world";
  strcpy(buffer, c);
}

void intOverflow() {
    int a = 2147483647;
    a = a + 1;
    printf("%d\n", a);
}

void nullDeref() {
  int *a = NULL;
  *a = 1;
}

void outOfBounds() {
  int arr[2];
  arr[5] = 999;
}

  // Not caught.
void outOfBounds2() {
  int *a = (int *)malloc(2 * sizeof(int));
  a[9] = 999;
  free(a);
}

void uninitPtrWrite() {
  int *a;
  a[1] = 1;
}

void useAfterFree() {
  int *a = malloc(256);
  free(a);
  a[1] = 1;
}

void wrongMallocSize() {
  int *a = malloc(10);
  free(a);
}

void memLeak() {
  char *a = malloc(5);
}

int main() {
  bufferOverflow();
  intOverflow();
  nullDeref();
  uninitPtrWrite();
  useAfterFree();
  wrongMallocSize();
  memLeak();
  outOfBounds();
  outOfBounds2();

  return 0;
}
