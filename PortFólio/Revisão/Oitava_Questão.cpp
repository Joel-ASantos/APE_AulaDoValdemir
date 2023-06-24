#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Lista de Revisão-Questão 8
Nome: Joel Alves dos Santos
Matrícula: UC22102248

Escreva um programa que leia três valores reais: A, B e C. Em seguida, calcule e 
mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.
*/

int main(void)
{
    float Area_triangulo_retangulo,Area_circulo,Area_Trapezio;
    float Area_quadrado,Area_retangulo;
    const float pi = 3.14159;
    float A,B,C;

    printf("Escreva aqui os valores de A,B e C: ");
    scanf("%f %f %f",&A,&B,&C);

    Area_triangulo_retangulo = (A*C) / 2;
    Area_circulo = pi * pow(C,2);
    Area_Trapezio = ((A+B) * C) / 2;
    Area_quadrado = pow(B,2);
    Area_retangulo = A*B;

    printf("\nArea do triangulo retangulo: %.3f",Area_triangulo_retangulo);
    printf("\nArea do Circulo: %.3f",Area_circulo);
    printf("\nArea do Trapezio: %.3f",Area_Trapezio);
    printf("\nArea do Quadrado: %.3f",Area_quadrado);
    printf("\nArea do Retangulo: %.3f",Area_retangulo);
    return 0;
}