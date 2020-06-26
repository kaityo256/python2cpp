#include <cstdio>

bool is_even(int a) {
  while (a % 2 != 0) {
    a += 2;
  }
  return true;
}

int main() {
  if (is_even(1)) {
    printf("Odd is even!\n");
  }
}