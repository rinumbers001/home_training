#include <stdio.h>
#include <stdlib.h>

/*Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros
quadrados da área a ser pintada. Considere que a cobertura da tinta é de 1 litro para cada
3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00.
Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.  */

int main()
{
    float area;
    int lata_preco = 80;
    int rendimento = 18 * 3;
    int qtd_latas, preco_total;

    printf("Informe a area de pintura: \n");
    scanf("%f", &area);

    qtd_latas = area / rendimento;
    preco_total = qtd_latas * lata_preco;

    printf("Voce precisara de %d latas e o valor serah de R$ %d", qtd_latas, preco_total);

    return 0;
}
