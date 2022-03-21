#include <stdio.h>
#include <stdlib.h>

//Faça um Programa que peça dois números e imprima o maior deles.

int main()
{
    int num1, num2;

    printf("Informe um numero: \n");
    scanf("%d", &num1);
    printf("Informe outro numero: \n");
    scanf("%d",&num2);

    if (num1 > num2)
    printf("O maior numero eh %d", num1);
    else
    printf("O maior numero eh %d", num2);

    return 0;
}
