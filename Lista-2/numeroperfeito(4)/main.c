#include <stdio.h>
#include <stdlib.h>

int somaDivisores(int n){
    int soma = 0;
    int i;
    for(i = 1; i<(n/2);i++)
        if(n%i==0)
            soma = i + soma;
    if(soma == 1){
        return 1;
    }
    if(n%2==0){
        return soma + n/2;
    }
    return soma;
}

int main(){
    int n;
    int i;
    scanf("%d",&n);
    printf("%d = ",n);
    printf("1 ");
    for(i = 2; i<(n/2);i++){
        if(n%i==0)
            printf("+ %d ",i);
    }

    if(n%2 ==0){
        printf("+ %d = %d",n/2,somaDivisores(n));
    }
    else{
        printf("= %d",somaDivisores(n));
    }
    
    

    if(somaDivisores(n)==n)
        printf(" (NUMERO PERFEITO)");
    else
        printf(" (NUMERO NAO E PERFEITO)");

    return 0;
}
