#include <cstdio>

void func(int &v) {
  if (&v == NULL) {
    printf("v is NULL!\n");
  } else {
    printf("v is not NULL!\n");
  }
}

int main(void) {
  int *p = NULL;
  func(*p);
}
