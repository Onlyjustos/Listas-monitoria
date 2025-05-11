#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int raizesEq2Grau(double a,double b,double c,double* r1,double* r2){
    double delta = b*b - (4*a*c);
    if(delta<0)
        return 0;
    if(delta== 0){
        *r1 = -b / (2*a);
        *r2 = *r1;
        return 1;
    }
    *r1 = (-b - sqrt(delta)) / (2 * a);
    *r2 = (-b + sqrt(delta)) / (2 * a);
    return 2;
}

int main()
{
    double a,b,c,r1,r2;
    scanf("%lf %lf %lf",&a,&b,&c);
    int op = raizesEq2Grau(a,b,c,&r1,&r2);
    if(op == 0)
        printf("RAIZES IMAGINARIAS");
    if(op == 1)
        printf("RAIZ UNICA\nX1 = %.2lf",r1);
    if(op == 2){
        if(r1<r2) {
            printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n",r1,r2);
        }
        else printf("RAIZES DISTINTAS\nX1 = %.2lf\nX2 = %.2lf\n",r2,r1);
        
    }
    return 0;
}
