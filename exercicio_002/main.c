#include <stdio.h>
#include <stdlib.h>

//Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

int main()
{
    int num1;
    printf("Informe um numero: \n");
    scanf("%d", &num1);

    if (num1 > 0)
        printf("O numero %d eh positivo", num1);
    else
        printf("O numero %d eh negativo", num1);

    return 0;
}
