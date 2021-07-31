#include <cstdio>

int a = 3, b = 5;

int add(int x, int y) {
  return x + y;
}

int main() {
  int c = add(a, b);
  printf("%d\n", c);
  printf("add : %p\n", add);
  printf("main: %p\n", main);
  printf("a   : %p\n", &a);
  printf("b   : %p\n", &b);
}
