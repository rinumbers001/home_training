#include <stdio.h>
#include <stdlib.h>

//Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
//Calcule e mostre o total do seu salário no referido mês.

int main()
{
    float salario_hora, horas_trabalhadas;

    printf("Informe seu salario por hora: \n");
    scanf("%f", &salario_hora);
    printf("Informe a quantia de horas trabalhadas no mes: ");
    scanf("%f", &horas_trabalhadas);

    printf("O salrio mensal serah de R$ %.2f", salario_hora*horas_trabalhadas);

    return 0;
}
