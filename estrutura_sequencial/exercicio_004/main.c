#include <stdio.h>
#include <stdlib.h>

//Faça um Programa que peça as 4 notas bimestrais e mostre a média.

int main()
{
    float bim_1, bim_2, bim_3, bim_4,media;

    printf("informe a nota do primeiro bimestre: \n");
    scanf("%f",&bim_1);
    printf("informe a nota do segundo bimestre: \n");
    scanf("%f",&bim_2);
    printf("informe a nota do terceiro bimestre: \n");
    scanf("%f",&bim_3);
    printf("informe a nota do quarto bimestre: \n");
    scanf("%f",&bim_4);

    media = (bim_1 + bim_2 + bim_3 + bim_4)/4;

    printf("A media dos bimestres foi de %.2f \n", media);

    return 0;
}
