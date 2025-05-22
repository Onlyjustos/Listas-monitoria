#include <stdio.h>
#include <stdlib.h>

double absoluto (double n){
    if(n<0)
        return n *-1;
    return n;
}

double raiz( double n , double p){
    double e;
    double apro = 1, prox_apro = 0;
    do{
        prox_apro = (apro + n/apro)/2;
        apro = prox_apro;
        e = absoluto(n-(apro*apro));
        printf("r: %.9lf, err:   %.9lf\n",apro,e);
        prox_apro = 0;

    }
    while(e>p);
    return apro;

}

int main()
{
    double n,e ;
    scanf("%lf %lf",&n,&e);
    raiz(absoluto(n),e);
    return 0;
}

