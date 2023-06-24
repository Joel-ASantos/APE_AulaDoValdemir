#include <stdio.h>
#include <stdlib.h>

/*
Nome: Joel Alves dos Santos
Data: 07/04/2023

1. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, 
coletando dados sobre o salário e o número de filhos. A prefeitura deseja 
saber:
a) média salarial da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$ 100,00.
O final da leitura de dados se dará com a entrada de um salário negativo
*/

int main(void)
{   
    int Numero_filhos,Quantidade = 0, Quantidade_AbaixoCem = 0;
    float Percentual,Salario,Salario_medio,Media_Filhos,MaiorSalario =0;

    printf("Digite o salario: ");
    scanf("%f",&Salario);

    while(Salario > 0)
    {
        printf("\nDigite o numero de filhos: ");
        scanf("%i",&Numero_filhos);

        Salario_medio += Salario;
        Media_Filhos += Numero_filhos;
        Quantidade++;

        if(Salario < 100){
            Quantidade_AbaixoCem++;
        }if(Salario > MaiorSalario){
            MaiorSalario = Salario;
        }
        
        printf("\nDigite o salario: ");
        scanf("%f",&Salario);
    }

    Salario_medio = Salario_medio / Quantidade;
    Media_Filhos = Media_Filhos / Quantidade;
    Percentual = ((float)Quantidade_AbaixoCem / Quantidade)*100;

    printf("Salario medio: R$ %.2f\n",Salario_medio);
    printf("Media de Filhos:  %.2f\n",Media_Filhos);
    printf("Maior Salario: R$ %.2f\n",MaiorSalario);
    printf("Percentual abaixo de R$ 100.00: %.2f%%\n",Percentual);  
    return 0;
}