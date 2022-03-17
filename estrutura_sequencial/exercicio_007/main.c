#include <stdio.h>
#include <stdlib.h>

//Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

int main()
{
    float lado, area;

    printf("Informe o valor do lado do quadrado: \n");
    scanf("%f",&lado);

    area = lado * lado;

    printf("O dobro da area do quadrado de lado %.2f eh %.2f", lado, 2*area);
    return 0;
}
