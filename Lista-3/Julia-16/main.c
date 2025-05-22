#include <stdio.h>
 
int main() {
 
    int n = 0, m = 0, nm;
    int i, k, ca, cb = 0, cc = 0;
 
    // scan m e n válidos
    while(n < 1 || n > 100) {
        scanf("%d", &n);
    }
    while(m < 1 || m > 100) {
        scanf("%d", &m);
    
    }
    int C1[n], C2[m];
 
 
    // preencher vetores sem permitir repetição
    for(i = 0; i < n; i++) {
        scanf("%d", &C1[i]);
        for(k = 0; k < i; k++) {
            
            while (C1[i] == C1[k]) {
                    scanf("%d", &C1[i]);
            
            }
        }
    }
    for(i = 0; i < m; i++) {
        int temp,control;
        scanf("%d", &temp);
        for(k = 0; k < i; k++) {
            
            if (temp == C2[k]) {
                control = 1;
            }
        }
        if(control == 0 )
            C2[i] = temp;
        else
            i--;
        control = 0;

    }
 
 
    // printar conjuntos
    printf("(");
    for(i = 0; i < n; i++) {
        if(i != n-1) {
            printf("%d,", C1[i]);
        } else {
            printf("%d", C1[i]);
        }
    }
    printf(")\n");
 
    printf("(");
    for(i = 0; i < m; i++) {
        if(i != m-1) {
            printf("%d,", C2[i]);
        } else {
            printf("%d", C2[i]);
        }
    }
    printf(")\n");
 
 
    // subtrair conjuntos
    printf("(");
    for(i = 0; i < n; i++) {
        ca = 0;
        for(k = 0; k < m; k++) {
            if(C1[i] != C2[k]) {
                ca++;
            }
        } //tentando printar (x,y,...)
        if(cb > 0 && ca == m) {
            printf(",");
        }
        if(ca == m) {
            cb++;
            printf("%d", C1[i]);
        }
    }
    printf(")\n");
 
 
    //multiplicar conjuntos
    nm = n * m;
    printf("(");
    for(i = 0; i < n; i++) {
        for(k = 0; k < m; k++) {
            printf("(%dx%d)", C1[i], C2[k]);
            cc++;
 
            if(cc != nm) {
                 printf(",");
            }
        }
    }
    printf(")\n");
 
    return 0;
}
