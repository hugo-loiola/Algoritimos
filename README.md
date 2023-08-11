# Aprendizado de Algoritimos com C

### Hello World

```c
#include<stdio.h>

main(){
  printf("Olá Mundo"); // Exibir no Terminal
  printf("\nPrimeira aula"); // Exibir quebra de Linha
};
```

### Input

```c
int nota;

printf("Nota: ");
scanf("%d", &nota); // &variavel = salvar na memória
```

### If Else

```c
if (media < 7)
  { // se for menor que 7, reprovado
    printf("Aluno Reprovado!\n");
  }
  else if (media > 8)
  { // se for maior que 8 espetacular
    printf("Aluno Espetacular!\n");
  }
  else
  { // se for maior que 7, aprovado
    printf("Aluno Aprovado!\n");
  }
```
