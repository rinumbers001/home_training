#include <stdio.h>
#include <stdlib.h>

// Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.

int main()
{
    int raio;
    float area;

    printf("Informe o raio do circulo: \n");
    scanf("%d", &raio);

    area = 3.14 * raio * raio;

    printf("A area do circulo de raio %d eh %.2f de unidades de medida ao quadrado", raio, area);

    return 0;
}
