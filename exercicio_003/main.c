#include <stdio.h>
#include <stdlib.h>

/*Fa�a um Programa que verifique se uma letra digitada � "F" ou "M".
Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inv�lido.  */

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
