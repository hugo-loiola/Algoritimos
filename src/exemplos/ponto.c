#include <stdio.h>
#include <math.h>
typedef struct ponto
{
  int X;
  int Y;
} Ponto;

int main()
{
  Ponto p1, p2;
  double distancia;
  printf("Insira as coordenadas do ponto 1:\n");
  printf("X:");
  scanf("%d", &p1.X);
  printf("Y:");
  scanf("%d", &p1.Y);

  printf("Insira as coordenadas do ponto 2:\n");
  printf("X:");
  scanf("%d", &p2.X);
  printf("Y:");
  scanf("%d", &p2.Y);

  printf("Distancia entre p1 (%d, %d) e p2 (%d, %d)\n", p1.X, p1.Y, p2.X, p2.Y);
  distancia = sqrt(pow(p1.X, 2) + pow(p1.Y, 2)) - sqrt(pow(p2.X, 2) + pow(p2.Y, 2));
  printf("%.2lf", distancia);
  return 0;
}