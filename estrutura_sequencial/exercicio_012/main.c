#include <stdio.h>
#include <stdlib.h>

//Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal,
//usando a seguinte fórmula: (72.7*altura) - 58

int main()
{
    float altura, peso;

    printf("Informe a altura da pessoa em metros: \n");
    scanf("%f", &altura);

    peso = (72.7 * altura) - 58;

    printf(" O peso ideal eh %.2f", peso);
    return 0;
}
