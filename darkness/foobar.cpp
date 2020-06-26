#include <cstdio>

int foo(void) {
  printf("foo\n");
}

void bar() {
  printf("bar\n");
  foo();
}

int main() {
  foo();
}