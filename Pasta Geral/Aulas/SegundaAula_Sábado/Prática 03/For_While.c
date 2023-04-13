#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
    //Exércio for
    float notas[3],total,media;
    char letra = 'P';

   while(letra != 'F')
   {
        printf("\nInsira as notas: ");

        for(int i = 0; i <= 3; i++){
            scanf("%f",&notas[i]);
        }

        for(int i = 0; i <= 3; i++)
        total = notas[0]+notas[1]+notas[2]+notas[3];
        
        media = total/4;
        printf("O resultado e: %.2f\n",media);

        system("pause");
        system("cls");
        printf("Caso deseja continuar digite (P), mas caso nao, digite(F): \n");
        letra = getch();       
   }
    return 0;
}