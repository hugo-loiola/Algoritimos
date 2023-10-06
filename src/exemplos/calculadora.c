#include <stdio.h>

int main()
{
    int numero1, numero2, resultado;
    char operacao;

    printf("\n-----");
    printf("Calculadora");
    printf("-----");

    printf("\nOperacao ");
    scanf("%c", &operacao);

    printf("\nNumero 1: ");
    scanf("%d", &numero1);

    printf("\nNumero 2: ");
    scanf("%d", &numero2);

    if (operacao == '+')
    {
        resultado = numero1 + numero2;
    }
    else if (operacao == '-')
    {
        resultado = numero1 - numero2;
    }
    else if (operacao == '*')
    {
        resultado = numero1 * numero2;
    }
    else if (operacao == '/')
    {
        resultado = numero1 / numero2;
    }
    else
    {
        printf("Coloque um Operador!");
    }

    printf("Resultado: %d\n", resultado);
    printf("Operacao: %c\n", operacao);

    return 0;
};