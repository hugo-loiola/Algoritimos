#include <stdio.h>
#include <string.h>

int main()
{
  double vetor[99999999];

  for (int i = 0; i < 99999999; i++)
  {
    vetor[i] = i;
  }

  for (int i = 0; i < 99999999; i++)
  {
    printf("%.2lf", vetor[i]);
  }
  printf("oi");

  return 0;
}