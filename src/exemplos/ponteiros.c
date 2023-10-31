#include <stdio.h>

int main()
{
  int c = 5, d = 50;
  int *p, *p1;

  p = &c;

  printf("O ponteiro de c: %p", p);
  return 0;
}