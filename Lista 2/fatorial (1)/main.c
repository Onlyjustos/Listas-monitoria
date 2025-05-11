#include <stdio.h>
#include <stdlib.h>

 unsigned long int fat( unsigned int n){
    if(n==0){
        return 1;
    }
    long int fatorial = n;
    int i;
    for(i = n-1;i>0;i--)
        fatorial = fatorial*i;
    
    return fatorial;
 }

int main(){
    int n;
    scanf("%d",&n);
    printf("%d! = %ld",n, fat(n));
    return 0;
}
