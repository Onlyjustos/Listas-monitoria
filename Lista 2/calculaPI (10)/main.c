#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double compute_pi(int n) {
    double pi = 2.0;
    for (int i = 1; i <= n; i++)
        pi *= (2.0 * i / (2.0 * i - 1.0)) * (2.0 * i / (2.0 * i + 1.0));

    return pi;
}


int main(){
    int n;
    scanf("%d",&n);
    printf("%.12lf",compute_pi(n));

    return 0;
}
