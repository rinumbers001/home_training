#include <stdio.h>
#include <stdlib.h>

// Faça um Programa que verifique se uma letra digitada é vogal ou consoante.

int main()
{
    char letra;

    printf("Digite uma letra: \n");
    scanf("%c", &letra);

    if ((letra == 'a') || (letra == 'e') || (letra == 'i') || (letra == 'o') || (letra == 'u'))
        printf("%c eh uma vogal", letra);
        else
            printf("%c eh uma consoante", letra);

    return 0;
}
