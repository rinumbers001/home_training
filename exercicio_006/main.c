#include <stdio.h>
#include <stdlib.h>

//Faça um Programa que leia três números e mostre o maior deles.

int main()
{
    int num1, num2, num3;

    printf("Informe um numero: \n");
    scanf("%d", &num1);
    printf("Informe outro numero: \n");
    scanf("%d", &num2);
    printf("Informe mais um numero: \n");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
        printf("O maior numero eh %d", num1);
    else
        if (num2 > num1 && num2 > num3 )
        printf("O maior numero eh %d", num2);
        else
            if (num3 > num1 && num3 > num2)
            printf("O maior numero eh %d", num3);
    return 0;
}
