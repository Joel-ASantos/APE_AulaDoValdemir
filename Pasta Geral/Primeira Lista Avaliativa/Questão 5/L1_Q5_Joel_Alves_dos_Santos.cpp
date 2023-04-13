#include <stdio.h>
#include <stdlib.h>

/*
Nome: Joel Alves dos Santos
Data: 12/04/2023

5. Desenvolva um programa que calcula a metragem quadrada de um 
terreno, usando o teste no final para criar a opção de digitar novos 
valores sem sair do programa.

O programa deverá pedir ao usuário para digitar a metragem1 do terreno, 
a metragem 2 e em seguida mostrar o tamanho total do terreno em 
metros quadrados. O programa deverá perguntar ao usuário se ele quer 
continuar para digitar outras metragens ou encerrar o programa
*/

int main(void)
{   
    //Declarando variáveis
    float Lado,Comprimento,Frente_terreno;
    float Calculo_terreno;
    int Progresso = 0;
    char Escolha;

    //Escrevendo o código
    printf("Se o seu terreno e irregular digite (i)\n");
    printf("Caso for regular, digite (r): ");
    scanf("%c",&Escolha);

    switch(Escolha)
    {
        case 'i':
            system("cls");
            while(Progresso == 0)
            {   
                printf("Insira o lado do lote: ");
                scanf("%f",&Lado);

                    while(Lado <= 0){
                        system("cls");
                        printf("\ntente novamente");
                        printf("\nInsira o lado: ");
                        scanf("%f",&Lado);
                    }
                
                printf("\nInsira o comprimento do lote: ");
                scanf("%f",&Comprimento);

                    while(Comprimento <= 0){
                        system("cls");
                        printf("\ntente novamente");
                        printf("\nInsira o comprimento: ");
                        scanf("%f",&Comprimento);
                    }
                
                printf("\nInsira a frente do lote: ");
                scanf("%f",&Frente_terreno);

                    while(Frente_terreno <= 0){
                        system("cls");
                        printf("\ntente novamente\n");
                        printf("\nInsira a frente do terreno: ");
                        scanf("%f",&Lado);
                    }

                Calculo_terreno = ((Lado+Comprimento)/2)*Frente_terreno;
                printf("\nO terreno tem: %.2f m2\n",Calculo_terreno);

                printf("Deseja continuar?\n");
                printf("Digite '0' para sim, e '1' para nao: ");
                scanf("%i",&Progresso);
                system("cls");
            }
        break;

        case 'r':
            system("cls");
            while(Progresso == 0)
            {   
                printf("Insira o lado do lote: ");
                scanf("%f",&Lado);

                while(Lado <= 0){
                    system("cls");
                    printf("\ntente novamente");
                    printf("\nInsira o lado: ");
                    scanf("%f",&Lado);
                }

                printf("\nInsira o comprimento do lote: ");
                scanf("%f",&Comprimento);

                while(Comprimento <= 0){
                    system("cls");
                    printf("\ntente novamente");
                    printf("\nInsira o comprimento: ");
                    scanf("%f",&Comprimento);
                }

                Calculo_terreno = Lado*Comprimento;
                printf("\nO terreno tem: %.2f m2\n",Calculo_terreno);

                printf("Deseja continuar?\n");
                printf("Digite '0' para sim, e '1' para nao: ");
                scanf("%i",&Progresso);
                system("cls");
            }
        break;

        default:
        printf("\nOpcao invalida");
        break;
    }

    return 0;
}