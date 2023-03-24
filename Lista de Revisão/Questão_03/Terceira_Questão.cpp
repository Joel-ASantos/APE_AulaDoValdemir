#include <stdio.h>
#include <locale.h>

/*
Lista de Revisão-Questão 3
Nome: Joel Alves dos Santos
Matrícula: UC22102248
Data: 21/03/2023

Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e atribua 
esta operação à variável PROD. A seguir mostre a variável PROD com mensagem 
correspondente.
*/

int main(void)
{
    int primeiro,segundo,Prod;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Insira aqui duas variáveis:\n");
	scanf("%i%i",&primeiro,&segundo);
	
	Prod = primeiro * segundo;
	printf("resultado é: %i", Prod);
    return 0;
}