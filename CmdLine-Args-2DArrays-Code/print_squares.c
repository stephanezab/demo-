#include <stdio.h>
#include <stdlib.h>

int main() { /* notice definition of argv */
  
  int a[4]={2,4,5};
  int *p=&a[2];
  
  printf("%d\n", *p);

   return 0;
}



 