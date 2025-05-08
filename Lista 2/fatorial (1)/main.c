#include <stdio.h>
#include <stdlib.h>

 unsigned long int fat( unsigned int n){
    long int fatorial = n;
    for(int i = n-1;i>0;i--)
        fatorial = fatorial*i;

    return fatorial;
 }

int main(){
    int n;
    scanf("%d",&n);
    printf("%d! = %ld",n, fat(n));
    return 0;
}
