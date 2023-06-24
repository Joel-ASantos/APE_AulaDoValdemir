#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Lista de Revisão-Sétima Questão
Nome: Joel Alves dos Santos
Matrícula: UC22102248
Data: 23/03/2023

Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o 
valor de seu raio (R). A fórmula para calcular o volume é: (4/3) * pi * R3
. Considere 
(atribua) para pi o valor 3.14159
*/

int main()
{
    //Declarando as variáveis
    const float pi = 3.14159;
    float calculo;
    float raio;

    //Digitando o valor do raio
    printf("Insira aqui o Raio(R): ");
    scanf("%f",&raio);

    //Calculando o volume da esfera
    float cubo = pow(raio,3);
    calculo = (4*pi*cubo) / 3;
    printf("O volume da esfera e: %.3f",calculo);
    return 0;
}