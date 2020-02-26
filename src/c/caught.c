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
}

void nullDeref() {
  int *a = NULL;
  *a = 1;
}

void outOfBounds() {
  int arr[2];
  arr[5] = 999;
}

void uninitPtrWrite() {
  int *a;
  a[1] = 1;
}

void useAfterFree() {
  int *a = malloc(256);

  free(a);

  int x = 1;
  int y = 2;
  int z = 3;

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

  return 0;
}
