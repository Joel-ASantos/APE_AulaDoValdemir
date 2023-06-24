#include <stdio.h>
#include <stdlib.h>

/*
Lista de Revisão-Questão 12
Nome: Joel Alves dos Santos
Data: 23/03/2023
Matrícula: UC22102248

Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma 
comissão calculada de acordo com o valor de suas vendas. Se o valor da venda de 
um corretor for maior que R$ 50.000.00 a comissão será de 12% do valor vendido. Se 
o valor da venda do corretor estiver entre R$ 30.000.00 e R$ 50.000.00 (incluindo 
extremos) a comissão será de 9.5%. Em qualquer outro caso, a comissão será de 7%. 
Escreva um algoritmo que gere um relatório contendo nome, valor da venda e 
comissão de cada um dos corretores. O relatório deve mostrar também o total de 
vendas da empresa
*/

int main(void)
{   
    //Declarando Variáveis
    char nome1[10], nome2[10],nome3[10];
    float comissao[] = {0.07,0.12,0.095} ,vendas[3],Total_Vendas,Per_corretor1;
    float Per_corretor2,Per_corretor3;

    printf("Digite o nome do Corretor: ");
    scanf("%s",nome1);

    printf("\nDigite as vendas desse corretor: ");
    scanf("%f",&vendas[0]);

    setbuf(stdin,NULL);

    printf("Digite o nome do Corretor: ");
    scanf("%s",nome2);

    printf("\nDigite as vendas desse corretor: ");
    scanf("%f",&vendas[1]);
    
    setbuf(stdin,NULL);

    printf("Digite o nome do Corretor: ");
    scanf("%s",nome3);

    printf("\nDigite as vendas desse corretor: ");
    scanf("%f",&vendas[2]);

    /*comissao[0] = 0.07; comissao[1] = 0.12; comissao[2] = 0.095*/
    //Vendas acima de 50K = 12%; Vendas entre 30K e 50K = 9.5%; Vendas abaixo de 30K = 7%

    //Corretor1
    if(vendas[0] > 50000){
        Per_corretor1 = vendas[0] * comissao[1];
    }else if(vendas[0] <= 50000 && vendas[0] >= 30000){
        Per_corretor1 = vendas[0] * comissao[2];
    }else{
        Per_corretor1 = vendas[0] * comissao[0];
    }

    //Corretor2
    if(vendas[1] > 50000){
        Per_corretor2 = vendas[1] * comissao[1];
    }else if(vendas[1] <= 50000 && vendas[1] >= 30000){
        Per_corretor2 = vendas[1] * comissao[2];
    }else{
        Per_corretor2 = vendas[1] * comissao[0];
    }

    //Corretor3
    if(vendas[2] > 50000){
        Per_corretor3 = vendas[2] * comissao[1];
    }else if(vendas[2] <= 50000 && vendas[2] >= 30000){
        Per_corretor3 = vendas[2] * comissao[2];
    }else{
        Per_corretor3 = vendas[2] * comissao[0];
    }

    Total_Vendas = vendas[0] + vendas[1] + vendas[2];

    system("cls");

    //Registro do Corretor1
    printf("Nome do Corretor1: %s",nome1);
    printf("\nVendas do Corretor1: R$ %.2f",vendas[0]);
    printf("\nVendas + Comissao: %.2f\n",Per_corretor1);

    //Registro do Corretor2
    printf("\nNome do Corretor1: %s",nome2);
    printf("\nVendas do Corretor1: R$ %.2f",vendas[1]);
    printf("\nVendas + Comissao: %.2f\n",Per_corretor2);

    //Registro do Corretor3
    printf("\nNome do Corretor1: %s",nome3);
    printf("\nVendas do Corretor1: R$ %.2f",vendas[2]);
    printf("\nVendas + Comissao: %.2f\n",Per_corretor3);

    //Vendas Totais da Empresa
    printf("\nTotal de vendas da empresa: R$ %.2f",Total_Vendas);
    return 0;
}