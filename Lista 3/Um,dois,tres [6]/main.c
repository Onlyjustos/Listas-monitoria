#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,j=0,numero;
    char palavra[5];
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%s",palavra);
        while(palavra[j]!='\0'){
            j++;
        }
        if(j==3){
            if((palavra[0]=='t'&& palavra[1]=='w') || (palavra[0] =='t' && palavra[2] == 'o') || (palavra[1] == 'w' && palavra[2]=='o')){
                numero=2;
            }
            else{
                numero = 1;
            }
        }
        else{
            numero = 3;
        }
        printf("%d\n",numero);
        numero=0;
        j = 0;
    }
    

    return 0;
}