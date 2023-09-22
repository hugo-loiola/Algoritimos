#include <stdio.h>

int main()
{
	int tamanhoVetor, valor;
	scanf("%d", &tamanhoVetor);

	int vetor[tamanhoVetor];
	// definir os valores do vetor
	for (int i = 0; i < tamanhoVetor; i++)
	{
		scanf("%d", &valor);
		vetor[i] = valor;
	}
	// definir o menor valor e posição desse vetor
	int menorValor = vetor[0];
	int posicaoMenorValor = 0;
	for (int i = 1; i < tamanhoVetor; i++)
	{
		if (vetor[i] < menorValor)
		{
			menorValor = vetor[i];
			posicaoMenorValor = i;
		}
	}

	printf("Menor valor: %d\n", menorValor);
	printf("Posicao: %d\n", posicaoMenorValor);

	return 0;
}