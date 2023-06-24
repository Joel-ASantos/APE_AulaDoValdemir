#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numero1,numero2,numero3;

    scanf("%i %i %i",&numero1,&numero2,&numero3);

    if(numero1 > numero2 && numero1 > numero3)
    {
        printf("%i e o maior valor inserido",numero1);
    }
    else if(numero1 < numero2 && numero2 > numero3)
    {
        printf("%i e o maior valor inserido",numero2);
    }
    else if(numero3 > numero1 && numero3 > numero2)
    {
        printf("%i e o maior valor inserido",numero3);
    }

    return 0;
}