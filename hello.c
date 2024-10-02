#include <stdio.h>

int main() {
  char hello[] = "hello.c changed message"; 
  char hello2[] = { 72, 101, 108, 108, 111, 33, 0 };

  puts(hello);
  puts(hello2);

  return 0;
}
