#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba como dados de entrada de dois valores
e mostre como resultado as 4 operações matemática*/

int main(void)
{    
    float numero1,numero2,soma,subtracao,divisao,multiplicacao;

    printf("Insira dois valores: ");
    scanf("%f %f",&numero1,&numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    if(numero1 / numero2 && numero2 == 0){
        printf("\nA soma e: %.2f",soma);
        printf("\nA subtracao e: %.2f",subtracao);
        printf("\nA multiplicacao e: %.2f",multiplicacao);
        printf("\nNao existe divisao por zero\n");
    }else{
        printf("\nA soma e: %.2f",soma);
        printf("\nA subtracao e: %.2f",subtracao);
        printf("\nA multiplicacao e: %.2f",multiplicacao);
        printf("\nA divisao: %.2f", divisao);
    }
    return 0;
}