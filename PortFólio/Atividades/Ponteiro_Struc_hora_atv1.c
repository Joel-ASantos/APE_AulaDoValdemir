#include <stdio.h>
#include <stdlib.h>

typedef struct timer
{
    int horas;
    int minutos;
    int segundos;
}tempo;
int main(void){
    
    tempo primeiro;

    tempo *ptrHoras = &primeiro;
    
    primeiro.horas = 10;
    primeiro.minutos = 30;
    primeiro.segundos = 50;

    printf("Horas: %d\nMinutos: %d\nSegundos: %d", (*ptrHoras).horas,(*ptrHoras).minutos,(*ptrHoras).segundos);
    return 0;
}