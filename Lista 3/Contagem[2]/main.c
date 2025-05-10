#include <stdio.h>
#include <stdlib.h>

int achei(int procurado,int key){

    if(key<=procurado){
        return 1;
    }

    return 0;
}

int main(){
    int N,K,count=0,j,i;
    
    do{

        scanf("%d",&N);

    }while( N<1 || N>1000);
    int vetor[N];

    for(j = 0;j<N;j++){
        scanf("%d",&vetor[j]);
    }
    scanf("%d",&K);

    for(i=0;i<N;i++){

        count = achei(vetor[i],K)+count;


    }
    printf("%d\n",count);
    
    return 0;
}

