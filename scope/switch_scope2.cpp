#include <cstdio>

void func(int a) {
  switch (a) {
  case 2:
    puts("One");
    break;
  case 1:
    int b = 2;
    printf("%d\n", b);
    break;
  }
}
