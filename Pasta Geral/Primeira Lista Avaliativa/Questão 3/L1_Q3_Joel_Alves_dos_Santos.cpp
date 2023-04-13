#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Nome: Joel Alves dos Santos
Data: 10/04/2023

3. Elabore um programa que faça o sorteio de vários números e ao final 
mostra:
a) A quantidade de números sorteados;
b) O Maior numero sorteado;
c) Quantos números pares foram sorteados;
Observação: O programa deve finalizar quando for sorteado o valor 0 
(zero)e utilizar no máximo 3 variáveis não utilizar vetores ou matrizes.
*/

int main(void)
{   
    //Declarando variáveis
    int contador = 0,maior_sorteio = 0,sorteio,pares;

    //Usando uma função para deixar aleatório
    srand(time(NULL));

    //Escrevendo o código em si
    while(sorteio != 0)
    {
        sorteio = rand() % 100;
        contador++;

        printf("Sorteio: %i\n", sorteio);

        if(sorteio > maior_sorteio){
            maior_sorteio = sorteio;
        }

        if(sorteio % 2 == 0){
            pares++;
        }
    }
    printf("\nContador: %i",contador);
    printf("\nMaior Sorteio: %i",maior_sorteio);
    printf("\nPares: %i",pares);
    return 0;
}