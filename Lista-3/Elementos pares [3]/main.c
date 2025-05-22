#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,count=0,i,j;
    
    
    scanf("%d",&n);
    int vetor[n];
    for(i = 0;i<n;i++){
        scanf("%d",&vetor[i]);
    }
    for(j = 0; j<n;j++){
        if(vetor[j]%2==0){
            printf("%d ",vetor[j]);
            count ++;
        }
    }
    printf("%d\n",count);
    return 0;
}