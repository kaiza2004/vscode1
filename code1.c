#include <stdio.h>

int main(void) {
  printf("hello world\n");
  int x = 10;
  printf("%d\n", x);

  for (int i = 0; i <= x; i++) {
    printf("%d ", i);
  }
  printf("\n");

  return 0;
}