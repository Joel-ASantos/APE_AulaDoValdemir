#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void list(struct livro liv);

struct livro novonome();
struct livro{
    char titulo[30];
    int regnum
};

int main(void){
    struct livro livro1;
    struct livro livro2;

    livro1=novonome();
    livro2=novonome();
    list(livro1);
    list(livro2);    
}

struct livro novonome(){
    char numstr[81];
    struct livro livr;

    printf("\nNovo Livro\nDigite titulo: ");
    gets(livr.titulo);

    printf("\nDigite o numero do registro(3 digitos): ");
    gets(numstr);

    livr.regnum=atoi(numstr);
    return livr;   
}

void list(struct livro liv){
    printf("\nLivro: \n");
    printf("Titulo: %s\n",liv.titulo);
    printf("Numero do registro: %d\n",liv.regnum);
}