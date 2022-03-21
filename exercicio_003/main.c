#include <stdio.h>
#include <stdlib.h>

/*Faça um Programa que verifique se uma letra digitada é "F" ou "M".
Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.  */

int main()
{
    char genero;

    printf("Informe o genero (m/f): \n");
    scanf("%c", &genero);

    if ((genero == 'F') || (genero == 'f'))
        printf("Feminino");
    else
        if ((genero == 'M') || (genero == 'm'))
        printf("Masculino");
    else
        printf("Genero  invalido");

    return 0;
}
