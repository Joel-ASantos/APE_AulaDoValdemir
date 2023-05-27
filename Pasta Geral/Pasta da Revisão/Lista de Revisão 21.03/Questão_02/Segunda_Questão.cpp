#include <stdio.h>
#include <locale.h>

/*
Lista de Revisão-Questão 2
Nome: Joel Alves dos Santos
Matrícula: UC22102248
Data: 21/03/2023

Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre 
elas e atribua à variável SOMA. A seguir escrever o valor desta variável.
*/

int main(void)
{
    int A,B,soma;
	setlocale(LC_ALL,"Portuguese");
    //Eu adicionei o setlocale, mas não funciona no Vs code

	printf("Insira aqui duas variáveis:\n");
	scanf("%i%i",&A,&B);
	
	soma = A + B;
	printf("resultado é: %i", soma);
    return 0;
}