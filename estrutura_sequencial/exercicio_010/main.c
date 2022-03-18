#include <stdio.h>
#include <stdlib.h>

//Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Fahrenheit.

    int main()
{
    float fahr, celsius;

    printf("Informe a temperatura em Celsius para conversao: \n");
    scanf("%f", &celsius);

    fahr = (9 * celsius + 160)/5;

    printf("%.2f Celsius equivalem a %.2f Fahrenheit", celsius, fahr);

    return 0;
}


