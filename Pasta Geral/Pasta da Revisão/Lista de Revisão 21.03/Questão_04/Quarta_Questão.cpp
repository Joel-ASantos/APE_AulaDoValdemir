#include <stdio.h>

/*
Lista de Revisão-Questão 4
Nome: Joel Alves dos Santos
Matrícula: UC22102248
Data: 21/03/2023

Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do produto 
de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D)
*/

int main(void)
{
    int A,B,C,D,Diferenca;

    printf("Insira aqui 4 valores para fazer a diferenca:\n");
    scanf("%i%i%i%i",&A,&B,&C,&D);

    Diferenca = (A*B-C*D);
    printf("O resultado e: %i",Diferenca);
    return 0;
}