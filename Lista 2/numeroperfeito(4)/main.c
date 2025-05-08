#include <stdio.h>
#include <stdlib.h>

int somaDivisores(int n){
    int soma = 0;

    for(int i = 1; i<(n/2);i++)
        if(n%i==0)
            soma = i + soma;

    return soma + n/2;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d = ",n);

    for(int i = 1; i<(n/2);i++)
        if(n%i==0)
            printf("%d + ",i);

    printf("%d = %d",n/2,somaDivisores(n));

    if(somaDivisores(n)==n)
        printf(" (NUMERO PERFEITO)");
    else
        printf(" (NUMERO NAO PERFEITO)");

    return 0;
}
