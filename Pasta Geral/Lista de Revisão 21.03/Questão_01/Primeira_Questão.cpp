#include <stdio.h>
#include <locale.h>

/*
Lista de Revisão-Questão 01
Nome: Joel Alves dos Santos
Matrícula: UC22102248
Data: 21/03/2023

Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma 
de A e B atribuindo o seu resultado na variável X. Imprima X conforme exemplo 
apresentado abaixo. Não apresente mensagem alguma além daquilo que está sendo 
especificado.
*/

int main(void)
{
    int A,B,X;
	setlocale(LC_ALL,"Portuguese");
	//Eu adicionei o setlocale, mas no Vs Code  não funciona

	printf("Insira aqui os valores de A e B: ");
	scanf("%i%i",&A,&B);
	
	X = A + B;
	printf("O resultado é: %i",X);

    return 0;
}