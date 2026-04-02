#include <stdio.h>

int main() {
  int a = 2;
  int * p;
  p = &a;
  printf("%d \n",a);
  printf("%p \n",p);
  printf("%d \n",*p);
  printf("%p \n",&a);
    return 0;
}