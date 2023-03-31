#include <stdio.h>
#include <stdlib.h>

int main(void){

    float nota1,nota2,nota3,nota4,nota5,media;

    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);

    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);

    printf("Digite a terceira nota: ");
    scanf("%f",&nota3);

    printf("Digite a quarta nota: ");
    scanf("%f",&nota4);

    printf("Digite a quinta nota: ");
    scanf("%f",&nota5);

    media = (nota1+nota2+nota3+nota4+nota5) / 5;

    printf("O resultado e: %2.f",media);
    return 0;
}