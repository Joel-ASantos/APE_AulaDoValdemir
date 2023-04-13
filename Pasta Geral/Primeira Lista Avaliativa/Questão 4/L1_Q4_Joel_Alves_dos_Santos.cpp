#include <stdio.h>
#include <stdlib.h>

/*
Nome: Joel Alves dos Santos
Data: 11/04/2023

4. Elabore um programa que receba como dados de entrada duas notas 
de vários alunos
e ao final mostra:
a) A quantidade de alunos com media maior ou igual a 7,0;
b) A Menor media da Turma;
c) A Media geral da turma;
d) Quantas vezes o programa rodou;
Observação: O programa deve finalizar quando for digitado o valor 0 
(zero) e utilizar no
máximo 6 variáveis não utilizar vetores ou matrizes.
*/

int main(void)
{
    // Declarando variáveis
    float notas1, notas2;
    float Menor_media, Media_Geral = 0;
    int Contador = 0, Quantidade_Alunos = 0;

    // Escrevendo o código
    printf("Insira as duas notas: ");
    scanf("%f %f", &notas1, &notas2);

    while(notas1 != 0 && notas2 != 0)
    {
        if((notas1 + notas2) >= 7.0){
            Quantidade_Alunos++;
        }

        if((notas1 + notas2) / 2 <= 6.9){
            Menor_media = (notas1 + notas2) / 2;
        }

        Contador++;
        Media_Geral += (notas1 / notas2) / 2;

        // Digite zero em uma das duas varíaveis para o break.
        printf("\nInsira as duas notas: ");
        scanf("%f %f", &notas1, &notas2);
    }

    // Display comparativo
    printf("\nContador: %i", Contador + 1);
    printf("\nMenor Media: %.2f", Menor_media);
    printf("\nMedia Geral: %.2f", Media_Geral / Contador);
    printf("\nQuantidade de alunos acima da media: %i", Quantidade_Alunos);   
    return 0;
}