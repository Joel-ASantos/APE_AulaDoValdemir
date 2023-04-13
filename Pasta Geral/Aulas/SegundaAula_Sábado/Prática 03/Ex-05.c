#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (void)
{
    int ano,dia_semana,dia,mes;
    const char ESC = 27;

    do
    {
        printf("Digite a data no formato dd mm aa:");
        scanf("%i %i %i",&dia,&mes,&ano);

        if(mes < 3){
            ano--;
        }else{
            dia_semana -= (int)(0.4*mes+2.3);
            dia_semana += (int)(ano/4) - (int)((ano/100+1)*0.75);
            dia_semana %= 7;
        }

        switch(dia_semana)
        {
            case 0:
            printf("\nDomingo");
            break;

            case 1:
            printf("\nSegunda");
            break;

            case 2:
            printf("\nTerca");
            break;

            case 3:
            printf("\nQuarta");
            break;

            case 4:
            printf("\nQuinta");
            break;

            case 5:
            printf("\nSexta");
            break;

            case 6:
            printf("\nSabado");
            break;
        }    
    } while (getch != ESC);
    
    return 0;
}