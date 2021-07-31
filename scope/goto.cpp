#include <cstdio>

void func(int a) {
  if (a % 2)
    goto even;
  else
    goto odd;
even:
  puts("Even");
  return;
odd:
  puts("Even");
}

int main() {
  func(2);
}
