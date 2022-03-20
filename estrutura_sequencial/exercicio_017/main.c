#include <stdio.h>
#include <stdlib.h>

/*Faça um Programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.
Considere que a cobertura da tinta é de 1 litro para cada 6 metros quadrados e que a tinta é vendida em latas de 18
litros, que custam R$ 80,00 ou em galões de 3,6 litros, que custam R$ 25,00. Informe ao usuário as quantidades de tinta
a serem compradas e os respectivos preços em 3 situações:
comprar apenas latas de 18 litros;
comprar apenas galões de 3,6 litros;
misturar latas e galões, de forma que o desperdício de tinta seja menor.
Acrescente 10% de folga e sempre arredonde os valores para cima, isto é, considere latas cheias.    */

int main()
{
    float area, cobertura_lata, cobertura_galao, quantidade_mista, rendimento;
    int preco_lata, preco_galao, quantidade_lata, quantidade_galao;

    printf("Informe a area de pintura em m2: \n");
    scanf("%f", &area);

    cobertura_lata = 18 * 6;
    //printf("%f",cobertura_lata);
    cobertura_galao = 3.6 * 6;
    rendimento = 6;

    quantidade_lata = area / cobertura_lata;
    printf("quantidade: %d lata(s)\n", quantidade_lata);

    quantidade_galao = area / cobertura_galao;
    printf("quantidade: %d galao(s)\n", quantidade_galao);

    quantidade_mista = (area * 1.1) / rendimento;
    printf("%.2f litros", quantidade_mista);

    return 0;
}
