#include <stdio.h>

int main()
{
  char tipo;
  float salario;

  scanf("%c", &tipo);
  scanf("%f", &salario);

  switch (tipo)
  {
  case 'a':
    printf("R$ %.2f\n", salario = salario * 1.05);
    break;

  case 'b':
    printf("R$ %.2f\n", salario = salario * 1.07);
    break;

  case 'c':
    printf("R$ %.2f\n", salario = salario * 1.08);
    break;

  default:
    break;
  }
  return 0;
}