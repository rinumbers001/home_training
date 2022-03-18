#include <stdio.h>
#include <stdlib.h>

/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e
mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda,
8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
salário bruto.
quanto pagou ao INSS.
quanto pagou ao sindicato.
o salário líquido.
calcule os descontos e o salário líquido, conforme a tabela abaixo:
+ Salário Bruto : R$
- IR (11%) : R$
- INSS (8%) : R$
- Sindicato ( 5%) : R$
= Salário Liquido : R$
Obs.: Salário Bruto - Descontos = Salário Líquido.*/

int main()
{
    float salario_hora, salario_bruto, horas_trabalhadas, IR, INSS, sindicato, salario_liquido;

    printf("Informe seu salario por hora: \n");
    scanf("%f", &salario_hora);
    printf("Informe o total de horas trabalhadas: \n");
    scanf("%f", &horas_trabalhadas);

    salario_bruto = salario_hora * horas_trabalhadas;
    IR = salario_bruto * 0.11;
    INSS = salario_bruto * 0.08;
    sindicato = salario_bruto * 0.05;
    salario_liquido = salario_bruto - IR - INSS - sindicato;

    printf("Salario Bruto:\t\t\t R$ %.2f \n", salario_bruto);
    printf("IR:\t\t\t\t R$ %.2f\n", IR);
    printf("INSS:\t\t\t\t R$ %.2f\n", INSS);
    printf("Sindicato:\t\t\t R$ %.2f\n", sindicato);
    printf("Salario Liquido:\t\t R$ %.2f\n", salario_liquido);
    return 0;
}
