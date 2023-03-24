#include <stdio.h>
#include <stdlib.h>

/*
Lista de Revisão-Questão 9
Nome: Joel Alves dos Santos
Matrícula: UC22102248

Faça um algoritmo que leia dois números A e B e imprima o maior deles.
*/

int main(void)
{
    int A,B;

    printf("Digite dois valores para A e B: ");
    scanf("%i %i",&A,&B);

    if(A > B){
        printf("A e maior que B");
        printf("\nA (%i) > B (%i)",A,B);
    }else if (A == B){
        printf("Invalido");
    }else{
        printf("B e maior que A");
        printf("\nB (%i) > A (%i)",B,A);
    }

    return 0;
}