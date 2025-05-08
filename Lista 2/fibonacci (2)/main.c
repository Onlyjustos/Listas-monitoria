#include <stdio.h>
#include <stdlib.h>

int main()
{   int t1,t2,n;
    scanf("%d %d %d",&t1,&t2,&n);
    printf("%d",fibonacci(t1,t2,n));
    return 0;
}
int fibonacci( int t1, int t2, int n){
    int t3;
    int f[100];
    if(n==1)
        return t1;
    if(n==2)
        return t2;
    for(int i = 2;i<n;i++){
        t3 = t1 + t2;
        t1 = t2;
        t2 = t3;
        
    }
    return t3;
}
