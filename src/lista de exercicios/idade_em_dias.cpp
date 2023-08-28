#include <stdio.h>

int main()
{
  int n, dia, mes, ano;
  scanf("%d", &n); // Colocar os dias

  ano = n / 365;        // Converter dias em anos
  mes = (n % 365) / 30; // Converter dias em meses
  dia = (n % 365) % 30; // Resto dos dias

  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);

  return 0;
}
