#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(){
    int n,i;
    scanf("%d",&n);
    getchar();
    
    while(n--){
        char str[1000],err = 0,j;
        gets(str);
        int tam = strlen(str);
        char rts[tam];
        for(i = 0;i<tam;i++){
            if((str[i]>64 && str[i]<91) || (str[i]>96 && str[i] <123 )){
                str[i] += 3;
            }
        }
        if(tam % 2 == 0){
            err++;
        }
        for (i = tam-1, j = 0; i >= 0; i--, j++) {
            rts[j] = str[i];
        }
        rts[tam] = '\0';
        for(i = tam/2;i<tam;i++){
            rts[i]--;
     }
        printf("%s\n",rts);
    }
}