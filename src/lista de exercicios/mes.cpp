#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
  double preco[10], valor;
  scanf("%lf", &valor);

  preco[0] = 10.5;
  preco[1] = 0.5;
  preco[2] = 100;
  preco[3] = 500;

  for (int i = 0; i <= 9; i++)
  {
    if (preco[i] == valor)
    {
      cout << preco[i] << endl;
    }
  }

  return 0;
};
