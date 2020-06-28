#include <cstdio>

int a[10] = {0,1,2,3,4,5,6,7,8,9};

int main(){
  printf("Value of   a[1] is %d\n",a[1]);
  printf("Address of a[1] is %p\n",&a[1]);
  printf("Value of   1[a] is %d\n",1[a]);
  printf("Address of 1[a] is %p\n",&(1[a]));
  printf("Value of *(a+1) is %d\n",*(a+1));
  printf("Address pointed by a+1 is %p\n",a+1);
} 