#include <stdio.h>
#include <stdlib.h>

//Faça um Programa que peça a temperatura em graus Fahrenheit, transforme e mostre a temperatura em graus Celsius.
//C = 5 * ((F-32) / 9).

int main()
{
    float fahr, celsius;

    printf("Informe a temperatura em Fahrenheit para conversao: \n");
    scanf("%f", &fahr);

    celsius = 5 * ((fahr - 32)/9);

    printf("%.2f Fahrenheit equivalem a %.2f Celsius", fahr, celsius);

    return 0;
}
