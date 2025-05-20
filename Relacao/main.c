#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int quantidade;
typedef struct Relacao{
    int x;
    int y;
    char nome;
}
Relacao[100];
void imprime(Relacao);
void insere(Relacao);
void operacao(Relacao);
int valida_nome(Relacao,char);
int main(){
    Relacao relacao;
    int op;  
    system("cls");
    while(op!=4){
        printf("Digite a opcao:\nInserir relacao(1);\nImprimir relacao (2);\nOperacao de relacao(3);\nSair(4);\n");
        
        scanf("%d",&op);
        switch(op){
            case 1: 
                insere(relacao);
                break;
            case 2:
                imprime(relacao);
                break;
            case 3:
                operacao(relacao);
                break;
        }
        
    }
    

}


void insere(Relacao relacao){
    char nome;
    system("cls");
    
    
    while(!valida_nome(relacao,nome)){
        printf("Digite um nome valido para a relacao\n");
        scanf(" %c",&nome);
        
    }
    relacao[quantidade].nome = nome;
    printf("Digite o par ordenado no fomato: x y\n");
    scanf("%d %d",&relacao[quantidade].x,&relacao[quantidade].y);
    system("cls");
    quantidade++;
    
}
void imprime(Relacao relacao ){
    system("cls");
    printf("RELACOES:\n");
    for(int i=0;i<quantidade;i++){
        printf("%c %d %d\n",relacao[i].nome,relacao[i].x,relacao[i].y);
    }
    printf("\n\n");

}
void operacao(Relacao relacao){
    int r,op1,op2;
    system("cls");
    printf("Digite os numero das relacao (no formato: R S)\n");
    scanf(" %d",&op1);
    scanf(" %d",&op2);
    if(relacao[op1-1].y==relacao[op2-1].x)
        printf("%c o %c = {(%d,%d)}\n",relacao[op1-1].nome,relacao[op2-1].nome,relacao[op1-1].x,relacao[op2-1].y);

    else
        printf("Operacao invalida\n\n");
    
}
int valida_nome(Relacao relacao,char nome){
    int i=0;
    if(nome < 65 || nome > 122)
        return 0;
    while(i<quantidade){
        if (nome == relacao[i].nome)
            return 0;
        i++;
    }
    return 1;

}
