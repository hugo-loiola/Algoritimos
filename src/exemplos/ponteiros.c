#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *p;
  p = (int *)malloc(1000);

  printf("%p", p);
  return 0;
}