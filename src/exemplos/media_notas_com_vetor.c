#include <stdio.h>

int main()
{
    double notas[4], somaNotas = 0, mediaComPeso = 0, pesos[4] = {0.1, 0.2, 0.3, 0.4};
    char nomeAluno[100];

    scanf("%s", &nomeAluno);
    printf("Nome do aluno: %s\n");

    printf("Insira 4 notas:\n");
    for (int i = 0; i <= 3; i++)
    {
        printf("Nota %d: ", i + 1);
        scanf("%lf", &notas[i]);
        mediaComPeso = notas[i] * pesos[i];
        somaNotas = somaNotas + mediaComPeso;
    }
    // Ler as notas
    for (int i = 0; i <= 3; i++)
    {
        printf("Nota %d, %.2lf\n", i + 1, notas[i]);
    }
    printf("Media Final do Aluno %s: %.2lf\n", nomeAluno, somaNotas);

    return 0;
}