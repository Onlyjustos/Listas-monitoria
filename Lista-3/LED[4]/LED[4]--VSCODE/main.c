#include <stdio.h>
int main() {
    int n,aux[10] = {6,2,5,5,4,5,6,3,7,6},i,soma=0,j=0; 
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        char numero[101];
        scanf("%s",numero);
        while(numero[j]!='\0'){
            soma += aux[numero[j]-48];
            j++;
        }   
        printf("%d leds\n",soma);
        soma=0;
        j=0;
    }

}