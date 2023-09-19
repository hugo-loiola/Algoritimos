#include <stdio.h>

int main()
{
  int senha, teste;

  scanf("%d", &senha);
  printf("senha cadastrada: %d\n", senha);

  while (teste != senha)
  {
    scanf("%d", &teste);
    if (teste == senha)
    {
      printf("senha valida!\n");
      return 0;
    }

    printf("senha invalida!\n");
  };

  return 0;
}