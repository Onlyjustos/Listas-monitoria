#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, n, i,j,maior=0,repet=0;
    
    while(1){
        scanf("%d",&n);
        if(n == 0){
            break;
        }
        int vetor[n];
        for(i=0;i<n;i++){
            scanf("%d",&vetor[i]);
            
        }
        maior = vetor[0];
        for(j=1;j<n;j++){
            
            if(vetor[j]>maior&&vetor[j]>vetor[j-1]){
                maior = vetor[j];
            }
            
        }
        
        for(cont=0;cont<maior+1;cont++){
            for(i = 0;i<n;i++){
                if(cont>=vetor[i]){
                    repet++;
                }
            }
            printf("(%d) %d",cont,repet);
            printf("\n");
            repet=0;
        }
        maior = 0;
        


    }
    
}