#include <stdio.h>
#include <stdlib.h>

//Faça um Programa que peça dois números e imprima a soma.

int main()
{
    int num1, num2;

    printf("Digite um numero: \n");
    scanf("%d",&num1);
    printf("Digite outro numero: \n");
    scanf("%d",&num2);

    printf("A soma de %d e %d eh %d\n", num1, num2, (num1+num2));

    return 0;
}
