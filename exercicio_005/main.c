#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa para a leitura de duas notas parciais de um aluno.
O programa deve calcular a m�dia alcan�ada por aluno e apresentar:
A mensagem "Aprovado", se a m�dia alcan�ada for maior ou igual a sete;
A mensagem "Reprovado", se a m�dia for menor do que sete;
A mensagem "Aprovado com Distin��o", se a m�dia for igual a dez.    */

int main()
{
    float nota1, nota2, media;

    printf("Informe a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: \n");
    scanf("%f", &nota2);
    media  = (nota1 + nota2)/2;
    printf("Media %f\n", media);

    if (media == 10)
        printf("Aprovado com distincao");
    else
        if(media >= 7 && media <10)
        printf("Aprovado");
        else
            printf("Reprovado");

    return 0;
}
