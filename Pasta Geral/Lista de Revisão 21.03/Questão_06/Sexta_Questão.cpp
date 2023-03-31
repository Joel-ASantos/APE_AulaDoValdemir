#include <stdio.h>
#include <stdlib.h>

/*
Lista de Revisão-Questão 6
Nome: Joel Alves dos Santos
Matrícula: UC22102248
Data: 22/03/2023

Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor 
unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o valor unitário 
de cada peça 2. Após, calcule e mostre o valor a ser pago.
*/

int main(void)
{   
    int codigo_1,numeros_pecas1,codigo_2,numeros_pecas2;
    float valorUnitario,valorUnitario2,All;

    printf("Digite os valores abaixo\n");
    scanf("%i %i %f",&codigo_1,&numeros_pecas1,&valorUnitario);
    scanf("%i %i %f",&codigo_2,&numeros_pecas2,&valorUnitario2);

    All = (numeros_pecas1*valorUnitario)+(numeros_pecas2*valorUnitario2);
    printf("\nCodigo da peca 1 e 2: %i %i\n",codigo_1,codigo_2);

    printf("\nTodo o Valor: R$ %.2f",All);   
    return 0;
}