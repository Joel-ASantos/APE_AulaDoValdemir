#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float notas[4],media = 4,calculo;
    int i = 0;

    printf("Insira 4 notas:\n");

    while(i < 4)
    {   
        scanf("%f",&notas[i]);
        i++;
    }
    
    system("cls");

    calculo = (notas[0] + notas[1] + notas[2] + notas[3]) / media;
    printf("A media e: %.2f", calculo);
    return 0;
}