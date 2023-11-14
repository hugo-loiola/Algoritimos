#include <stdio.h>
#include <stdlib.h>

int main(){

  int n;
  do{
    printf("Insira um numero positivo maior que 0: ");
    scanf("%d", &n);
  }while(n <=0);

  int *vetor = (int *) malloc(n*sizeof(int));
  // Inserir valores no Array
  for(int i = 0; i < n; i++)
  {
    printf("vetor[%d]: ", i);
    scanf("%d", &vetor[i]);
  }
  return 0;
}