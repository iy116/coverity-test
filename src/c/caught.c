#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bufferOverflow() {
  char buffer[5];
  char c[] = "Hello world";
  strcpy(buffer, c);
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

int main() {
  bufferOverflow();
  nullDeref();
  outOfBounds();
  uninitPtrWrite();
  useAfterFree();
  wrongMallocSize();

  return 0;
}
