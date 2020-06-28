#include <cstdio>

int a = 12345;
int *p = &a;

int main(){
  printf("Address of a is %p\n",p);
  printf("Value of a is %d\n",*p);
}
