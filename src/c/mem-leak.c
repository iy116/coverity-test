#include <stdio.h>
#include <stdlib.h>

// Memory leak.
void memLeak() {
  char *a = malloc(5);
}

// No memory leak.
char * noMemLeak() {
  char *a = malloc(5);
  return a;
}

int main() {
  memLeak();
  noMemLeak();

  return 0;
}