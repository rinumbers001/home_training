#include <stdio.h>
#include <stdlib.h>

/*Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
o produto do dobro do primeiro com metade do segundo .
a soma do triplo do primeiro com o terceiro.
o terceiro elevado ao cubo.*/

int main()
{
    int num1, num2;
    float num3;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &num1);
    printf("Digite outro numero inteiro: \n");
    scanf("%d", &num2);
    printf("Digite um numero real: \n");
    scanf("%f", &num3);

    printf("o produto do dobro do primeiro com metade do segundo: %d \n", (num1 * 2) +(num2 / 2));
    printf("a soma do triplo do primeiro com o terceiro: %.2f \n", (3 * num1) + num3);
    printf("o terceiro elevado ao cubo: %.2f", num3 * num3 * num3);
    return 0;
}
