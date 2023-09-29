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

### Operadores Aritméticos

- Considere que A=10 e B=20.
<table>
 <tr>
    <th>Operador</th>
    <th>Descrição</th>
    <th>Exemplo</th>
    <th>Resultado</th>
  </tr>
 <tr>
    <td>+</td>
    <td>Soma</td>
    <td>A + B</td>
    <td>30</td>
  </tr>
  <tr>
    <td>-</td>
    <td>Subtração</td>
    <td>A - B</td>
    <td>-10</td>
  </tr>
  <tr>
    <td>*</td>
    <td>Multiplicação</td>
    <td>A * B</td>
    <td>200</td>
  </tr>
  <tr>
    <td>/</td>
    <td>Divisão Inteira</td>
    <td>B / A</td>
    <td>2</td>
  </tr>
  <tr>
    <td>%</td>
    <td>Módulo</td>
    <td>B % A</td>
    <td>0</td>
  </tr>
  <tr>
    <td>++</td>
    <td>Incremento</td>
    <td>A++</td>
    <td>11</td>
  </tr>
  <tr>
    <td>--</td>
    <td>Decremento</td>
    <td>A--</td>
    <td>9</td>
  </tr>
</table>

```c
x = n++;    // atribui e depois incrementa
y = ++n;    // incrementa e depois atribui
```

### Operadores Relacionais

- Considere que A=10 e B=20.

<table>
  <tr>
    <th>Operador</th>
    <th>Descrição</th>
    <th>Exemplo</th>
    <th>Resultado</th>
  </tr>
  <tr>
    <td>==</td>
    <td>Igual</td>
    <td>A == B</td>
    <td>False</td>
  </tr>
   <tr>
    <td>!=</td>
    <td>Diferente</td>
    <td>A != B</td>
    <td>True</td>
  </tr>
   <tr>
    <td> > </td>
    <td>Maior que</td>
    <td>A > B</td>
    <td>False</td>
  </tr>
   <tr>
    <td> < </td>
    <td>Menor que</td>
    <td>A < B</td>
    <td>True</td>
  </tr>
   <tr>
    <td> >= </td>
    <td>Maior ou Igual</td>
    <td>A >= B</td>
    <td>False</td>
  </tr>
   <tr>
    <td> <= </td>
    <td>Menor ou Igual</td>
    <td>A <= B</td>
    <td>True</td>
  </tr>
</table>

### Operadores Lógicos

- Considere que A=TRUE e B=FALSE.
<table>
  <tr>
    <th>Operdor</th>
    <th>Descrição</th>
    <th>Exemplo</th>
    <th>Resultado</th>
  </tr>
   <tr>
    <td>&&</td>
    <td>AND</td>
    <td>A && B</td>
    <td>False</td>
  </tr>
   <tr>
    <td>||</td>
    <td>OR</td>
    <td>A || B</td>
    <td>True</td>
  </tr>
   <tr>
    <td>!</td>
    <td>NOT</td>
    <td>!A</td>
    <td>False</td>
  </tr>
</table>
