#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i=0,bin[100],j=0;
    while(scanf("%d",&n)!=-1){
        
        for(j = 0;n>1;j++){
            bin[j] = n%2;
            n = n/2;
        }
        bin[j] = n;
        for(j;j>=0;j--){
            printf("%d",bin[j]);
        }
        printf("\n");
        
    }
    return 0;
}