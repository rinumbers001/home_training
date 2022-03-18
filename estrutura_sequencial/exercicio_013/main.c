#include <stdio.h>
#include <stdlib.h>

/*Tendo como dado de entrada a altura (h) de uma pessoa,
construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:
Para homens: (72.7*h) - 58
Para mulheres: (62.1*h) - 44.7      */

int main()
{
    float altura, peso;
    char genero;

    printf("Informe o genero (m/f): \n");
    scanf("%c", &genero);
    printf("Informe a altura: \n");
    scanf("%f", &altura);

    if ((genero == 'f') || (genero == 'F'))
    peso = (62.1*altura) - 44.7;
    else
    peso = (72.7 * altura) - 58;

    printf("O peso ideal eh %.2f kg", peso);

    return 0;
}
