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
  };

  int numeroMes;
  scanf("%d", &numeroMes);

  if (numeroMes >= 1 && numeroMes <= 12)
  {
    printf("%s\n", meses[numeroMes - 1]);
  }
  else
  {
    printf("Coloque um valor entre 1 e 12!\n");
  }

  return 0;
}
