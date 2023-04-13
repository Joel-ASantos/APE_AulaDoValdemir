#include <stdio.h>
#include <stdlib.h>

/*
Nome: Joel Alves dos Santos
Data: 07/04/2023

2. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 
1,10 metro e cresce 3 centímetros por ano. Faça um programa em C que 
recebendo a altura e o crescimento anual de duas pessoas calcule e 
imprima quantos anos serão necessários para que a mais baixa seja 
maior que a outra. Caso isto não ocorra em 100 anos informar mensagem 
de impossibilidade.
Encerre a entrada de dados quando for digitada uma idade negativa. 
(Não use vetores ou matrizes).
*/

int main(void)
{
    //Declarando variáveis
    float altura_Chico,altura_Ze;
    float taxa_Crecimento_Chico,taxa_Crecimento_Ze;
    float Altura_Alcancada_Chico,Altura_Alcancada_Ze;
    float altura_Chico_alcancar,altura_Ze_alcancar;
    int anos_necessarios1,anos_necessarios2;
    int limite,idade_chico,idade_Ze;

    //Atribuindo valor da variável
    limite = 100;

    //Escrevendo o Programa
    while (true)
    {   
        //Digite a altura do Chico e Ze. Ex: 2.00 2.00   
        printf("Insira a altura do Chico e do Ze: ");
        scanf("%f %f",&altura_Chico,&altura_Ze);

        printf("Insira a altura que Chico e Ze querem alcancar: ");
        scanf("%f %f",&altura_Chico_alcancar,&altura_Ze_alcancar);

        //A taxa de cresciment0 deve ser escrita assim: 0.02 0.03
        printf("Insira a taxa de crescimento do chico e do ze: ");
        scanf("%f %f",&taxa_Crecimento_Chico,&taxa_Crecimento_Ze);

        printf("Insira a idade que Chico e Ze tem: ");
        scanf("%i %i",&idade_chico,&idade_Ze);

        if(idade_chico < 0 || idade_Ze < 0){
            printf("Idade Invalida!");
            break;
        }

        //Calculos dos anos necessarios
        anos_necessarios1 = (altura_Chico_alcancar - altura_Chico) / taxa_Crecimento_Chico;
        anos_necessarios2 = (altura_Ze_alcancar - altura_Ze) / taxa_Crecimento_Ze;

        //Calculando a altura adquirida para fazer comparativo
        Altura_Alcancada_Chico = altura_Chico + (taxa_Crecimento_Chico*anos_necessarios1);
        Altura_Alcancada_Ze = altura_Ze + (taxa_Crecimento_Ze*anos_necessarios2);

        //Vendo se está dentro do limite
        if(anos_necessarios2 > limite){
            printf("Impossivel chegar nessa altura");
        }

        //Display Comparativo
        printf("\nAltura que Chico alcancou: %.2f",Altura_Alcancada_Chico);
        printf("\nAltura que Ze alcancou: %.2f",Altura_Alcancada_Ze);
        printf("\nAnos necessarios para Chico: %i",anos_necessarios1);
        printf("\nAnos necessarios para Ze: %i\n",anos_necessarios2);
        system("\nPause\n");
        system("cls");
    }
    
    return 0;
}