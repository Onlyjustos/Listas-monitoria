#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double compute_pi(int n) {
    double pi=1.0 ,pitemp = 1,c=1.00;
    
    int i;
    for (i = 1; i <= n; i++){      
        pitemp = 2.0*c;
        if(i%2!=0){
            pitemp = pitemp / (2*c - 1.0);
        }
        else{
            pitemp = pitemp / (2*c + 1.0);
            c++;
        }

        pi = pi * pitemp;
    }
    return pi*2.0;
}


int main(){
    int n;
    scanf("%d",&n);
    printf("%.12lf",compute_pi(n));

    return 0;
}
