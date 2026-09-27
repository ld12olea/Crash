#include <stdio.h>

int main() {

  int i;
  int a[10];

  for (i=0; i<20; i++) {
    printf(stdout,"%d", i);
    a[i] = i;
  }
  
  printf("\n");
  return 0;
}
