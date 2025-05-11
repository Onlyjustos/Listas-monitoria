#include <stdio.h>
#include <stdlib.h>
int soma_anao(int ana[]){
    int sum = 0,i;

    for(i=0;i<9;i++){
        sum = sum + ana[i];
    }

    return sum;
}
void bubble_sort (int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
        

        for (j = 0; j < n - 1; j++) {
            

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}
int main()
{
    
    int i,j,k,num_listas,control=0;

    scanf("%d",&num_listas);
    int anoes[num_listas][9];
    for(i=0;i<num_listas;i++){
        for(j=0;j<9;j++){
            scanf("%d",&anoes[i][j]);

        }

    }
    int diff = 0;
    for(k=0;k<num_listas;k++){
        control = 0;
        diff = soma_anao(anoes[k]) - 100;
        for(i=0;i<9&&control==0;i++){
            for(j=0;j<9;j++){
                if(anoes[k][j]+anoes[k][i] == diff && j!=i){
                    control = 1;
                    break;
                }
            }

        }

            
        int m=0,c=0;
        while(c<9){
            if(c!=i-1&&c!=j){
                anoes[k][m] = anoes[k][c];
                m++;
            }
            c++;
        }
        bubble_sort(anoes[k],7);
        for(m=0;m<7;m++){
            printf("%d\n",anoes[k][m]);
        }
        diff = 0;
    }

    return 0;
}

