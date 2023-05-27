#include <stdio.h>

/*
Lista de Revisõa-10
Nome: Joel Alves dos Santos
Data:23/03/2023
Matrícula: UC22102248

Faça um algoritmo que leia um número N e imprima “F1”, “F2” ou “F3”, conforme a 
condição: 
 “F1”, se N <= 10
 “F2”, se N > 10 e N <= 100 
 “F3”se n > 100
*/

int main (void)
{
    int N;

    scanf("%i",&N);

    if(N <= 10){
        printf("F1");
    }else if(N > 10 && N <= 100){
        printf("F2");
    }else{
        printf("F3");
    }

    return 0;
}