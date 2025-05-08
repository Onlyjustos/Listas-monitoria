
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int v,c1,c2,c3,m;
    scanf("%d",&v);
    converteEmNotasMoedas( v, &c1, &c2, &c3, &m);
    printf("NOTAS DE 100 = %d\n",c1);
    printf("NOTAS DE 50 = %d\n",c2);

    printf("NOTAS DE 10 = %d\n",c3);
    printf("MOEDAS DE 1 = %d\n",m);
    return 0;
}
void converteEmNotasMoedas(int v,int* c1,int* c2,int* c3,int* m){
    *c1 = v/100;
    *c2 = v%100/50;
    *c3 = v%100%50/10;
    *m = v%100%50%20%10;

}


