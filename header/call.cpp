#include <cstdio>

int a = 3, b = 5;

int add(int x, int y) {
  return x + y;
}

int main() {
  int c = add(a, b);
  printf("%d\n", c);
}
