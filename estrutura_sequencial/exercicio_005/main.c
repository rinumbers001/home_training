#include <stdio.h>
#include <stdlib.h>

//Faça um Programa que converta metros para centímetros.

int main()
{
    float valor;

    printf("Digite o valor em metros para converter: \n");
    scanf("%f",&valor);
    printf("O valor, em centimetros, eh de %.0f",(valor*100));
    return 0;
}
