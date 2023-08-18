#include <stdio.h>

int main()
{
    int numero1, numero2, resultado;

    printf("\n-----");
    printf("Calculadora");
    printf("-----");

    printf("\nNumero 1: ");
    scanf("%d", &numero1);

    printf("\nNumero 2: ");
    scanf("%d", &numero2);

    resultado = numero1 - numero2;
    printf("\nResultado: %d", resultado);

    return 0;
};