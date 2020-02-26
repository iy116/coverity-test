#include <stdio.h>
#include <stdlib.h>

void memLeak1() {
  char *a = malloc(5);
}

char * memLeak2() {
  char *a = malloc(5);
  return a;
}

int main() {
  memLeak1();
  memLeak2();

  return 0;
}