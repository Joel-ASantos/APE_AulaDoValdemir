#include <stdio.h>

/*
Lista de Revisão-Questão 11
Nome: Joel Alves dos Santos
Data: 23/03/2023
Matrícula: UC22102248

Construa um algoritmo que receba como entrada três valores e os imprima em ordem 
crescente. 
*/

int main (void)
{
    float A,B,C;

    printf("Digite tres valores: ");
    scanf("%f %f %f",&A,&B,&C);

    if(A > B  && A > C && B > C){
        printf("%.1f %.1f %.1f\n",C,B,A);
    }else{
        printf("%.1f %.1f %.1f\n",B,C,A);
    }if(B > A && B > C && A > C){
        printf("%.1f %.1f %.1f\n",C,A,B);
    }else{
        printf("%.1f %.1f %.1f\n",A,C,B);
    }if(A > B){
        printf("%.1f %.1f %.1f\n",B,A,C);
    }else{
        printf("%.1f %.1f %.1f\n",A,B,C);
    }

    return 0;
}