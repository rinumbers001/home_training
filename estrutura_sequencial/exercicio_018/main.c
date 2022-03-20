#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de
Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link (em minutos). */

int main()
{

    float tempo, arquivo, link;

    printf("Informe o tamanho do arquivo (Mb/min): \n");
    scanf("%f", &arquivo);
    printf("Informe a velocidade do link (Mbps): \n");
    scanf("%f", &link);

    tempo = arquivo / link;

    printf("O tempo de download eh de %.2f minutos", tempo);
    return 0;
}
