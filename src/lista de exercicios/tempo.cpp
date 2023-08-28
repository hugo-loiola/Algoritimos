#include <stdio.h>

int main()
{
  int n, segundos, minutos, horas;
  scanf("%d", &n); // Pedir os segundos

  horas = n / 3600;           // Converter segundos em horas
  minutos = (n % 3600) / 60;  // Converter segundos em minutos
  segundos = (n % 3600) % 60; // Resto dos segundos

  printf("%d:%d:%d\n", horas, minutos, segundos);

  return 0;
}
