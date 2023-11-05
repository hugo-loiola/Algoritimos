#include <stdio.h>

int main()
{ // CÓDIGO INCOMPLETO, NAO PRECISA CORRIGIR!
  int senha, teste = -1;

  scanf("%d", &senha);
  printf("senha cadastrada: %d\n", senha);

  while (teste != senha)
  {
    scanf("%d", &teste);
    if (teste == senha)
    {
      printf("senha valida!\n");
      break;
    }
    printf("senha invalida!\n");
  };

  return 0;
}