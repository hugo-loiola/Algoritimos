#include <stdio.h>

int main()
{
  double raio, area;
  double n = 3.14159;

  scanf("%lf", &raio); // Pedir o Raio

  area = n * (raio * raio); // Área = pi * Raio^2
  printf("A=%.4lf\n", area);
  return 0;
};