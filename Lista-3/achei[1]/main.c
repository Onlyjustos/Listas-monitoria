#include <stdio.h>
#include <stdlib.h>

int achei(int vetor[],int key,int N){
    int l;
    for(l = 0;l<N;l++){
        if(key==vetor[l]){
            return 1;
        }
    }

    return 0;
}


int main(){
    int N,M,i,j,k;
    
    scanf("%d",&N);
    int vetor[N];
    for(i = 0;i<N;i++){
        scanf("%d",&vetor[i]);
    }
    
    scanf("%d",&M);
    int v_Key[M];
    for(j = 0;j<M;j++){
        scanf("%d",&v_Key[j]);
    }
    for(k = 0;k<M;k++){
        if(achei(vetor,v_Key[k],N)==1){
            printf("ACHEI\n");
        }
        else{
            printf("NAO ACHEI\n");
        }
    }
    return 0;
}
