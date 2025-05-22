#include <stdio.h>
#include <stdlib.h>
void separaDigitos(int n, int* pd1, int* pd2,int* pd3){
    *pd1 = n%100%10;
    *pd2 = n/10%10;
    *pd3 = n/100;

}

int main()
{   int n,d1,d2,d3;
    scanf("%d",&n);
    separaDigitos(n,&d1,&d2,&d3);
    printf("%d\n",d1*100+d2*10+d3);
    return 0;
}


