#include <stdio.h>

int main()
{
  int n, s, m, h;
  scanf("%d", &n);

  h = n / 3600;
  m = (n % 3600) / 60;
  s = (n % 3600) % 60;

  printf("%d:%d:%d\n", h, m, s);

  return 0;
}
