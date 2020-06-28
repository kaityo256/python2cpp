#include <cstdio>

int a[10];
int *p = a;

int main(){
  printf("%p\n",p+1);
  printf("%p\n",&a[1]);
}