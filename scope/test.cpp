#include <cstdio>

int main() {
  int a = 1;
  {
    int a = 2;
    printf("a = %d\n", a);
  }
  printf("a = %d\n", a);
}
