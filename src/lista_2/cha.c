#include <stdio.h>

int main()
{
  int cha;
  int tentativa;
  int acertos = 0;

  scanf("%d\n", &cha);

  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &tentativa);
    if (tentativa == cha)
    {
      acertos++;
    }
  }

  printf("%d\n", acertos);
  return 0;
}