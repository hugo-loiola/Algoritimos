#include <stdio.h>

int main()
{
  int X;
  float Y, consumo;

  scanf("%d\n", &X); // Pedir a quilometragem
  scanf("%f", &Y);   // Pedir o total de combustível gasto

  consumo = X / Y; // Fazer o calculo do consumo
  printf("%.3f km/l\n", consumo);

  return 0;
}