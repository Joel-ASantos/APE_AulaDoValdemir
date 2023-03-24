#include <stdio.h>
#include <stdlib.h>

/*
Lista de Revisão-Questão 5
Nome: Joel Alves dos Santos
Matrícula: UC22102248
Data: 21/03/2023

Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de 
vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% 
de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês.
*/

int main(void)
{
    char nome[10];
    float salario,comissao,vendas;
    float Calculos_vendas;

    printf("Digite aqui o nome do vendendor: ");
    scanf("%s",&nome);

    setbuf(stdin,NULL);

    printf("\nDigite aqui o salario fixo: ");
    scanf("%f",&salario);

    setbuf(stdin,NULL);

    //Em dinheiro
    printf("\nDigite as vendas feitas: ");
    scanf("%f",&vendas);

    comissao = 0.15;
    Calculos_vendas = (vendas*comissao) + salario;

    printf("\nO nome do vendedor: %s", nome);
    printf("\nO salario fixo: %.2f", salario);
    printf("\nAs vendas realizadas: %.2f",vendas);
    printf("\nA comissao por venda, e: 15%%");
    printf("\nResultado do salario mais comissao: R$ %.2f",Calculos_vendas);
    return 0;
}