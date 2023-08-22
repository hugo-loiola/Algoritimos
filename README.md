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

## Projeto Calculadora

### Operadores Aritméticos

Operador   | Descrição | 
:------:  | :------:
'+'       | Soma
'-'       | Subtração
'*'       | Multiplição
'/'       | Divisão Inteira
'%'       | Modulo
'++'      | Incremento
'--'      | Decremento

```c
x = n++;    // atribui e depois incrementa
y = ++n;    // incrementa e depois atribui 
```

### Operadores Relacionais

- Conside que A=10 e B=20.

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
</table>