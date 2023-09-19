#include <stdio.h>

int main()
{
    // 2 Alunos com 4 Notas; 2 linhas com 4 colunas
    double notas[2][4];

    for (int linha = 0; linha < 1; linha++)
    {
        printf("Insira as 4 notas do aluno %d:\n", linha + 1);
        for (int coluna = 0; coluna <= 3; coluna++)
        {
            printf("Nota %d: ", i + 1);
            scanf("%lf", &notas[linha][coluna]);
        }
    }

    for (int i = 0; i <= 3; i++)
    {
        printf("Nota %d: %.2lf:", i + 1, notas[0][i]);
    }

    return 0;
}