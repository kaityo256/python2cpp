#include <cstdio>

int i;
double d;
int *pi = &i;
double *pd = &d;

int main(){
  printf("%p\n", pi);
  printf("%p\n", pd);
}