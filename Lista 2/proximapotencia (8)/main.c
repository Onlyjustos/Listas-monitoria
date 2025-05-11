#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int i;
int next_power(int n, int p){
    int aux,power=0;
    for(i = 0;power<n;i++){
        aux = power;
        power = pow(i,p);

    }
    i--;
    if(power>n && power-n>n-aux){
        power = aux;
        i--;
    }

    return power;
}

int main()
{
    int base,n,p,x;
    scanf("%d",&n);
    scanf("%d",&p);
    x = next_power(n,p);

    //printf("%d -> %d^%d = %d",n,base,p,valor);
    printf("%d -> %d^%d = %d",n,i,p,x);

    return 0;
}
