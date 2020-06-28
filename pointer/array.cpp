#include <cstdio>

int a[10];
int *p = a;

int main(){
  printf("%p\n",p);
  printf("%p\n",&a[0]);
}