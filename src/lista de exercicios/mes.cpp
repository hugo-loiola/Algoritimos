#include <stdio.h>

int main()
{
  char *meses[12] = {
      "January",
      "February",
      "March",
      "April",
      "May",
      "June",
      "July",
      "August",
      "September",
      "October",
      "November",
      "December",
  }; // Array dos meses

  int numeroMes;
  scanf("%d", &numeroMes);
  // Se o número inserido for entre 1 e 12, faça o calculo. Se não exiba a mensagem de erro
  if (numeroMes >= 1 && numeroMes <= 12)
  {
    printf("%s\n", meses[numeroMes - 1]); // array[valorPosicao]
  }
  else
  {
    printf("Coloque um valor entre 1 e 12!\n");
  }

  return 0;
}
