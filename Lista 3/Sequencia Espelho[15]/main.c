#include <stdio.h>
#include <string.h>

void jogadentro(int n1, int n2, char stg[])
{
    int j = 0, i, x;

    for (i = n1; i <= n2; i++)
    {
        j += sprintf(stg+j,"%d",i);
    }
    

    j = 0;

    printf("%s", stg);
    for (x = strlen(stg)-1; x >= 0; x--)
    {
        printf("%c", stg[x]);
    }
    printf("\n");
}

int main()
{

    int cont, n1, n2, i;
    char stg[12222];

    scanf("%d ", &cont);

    for (i = 0; i < cont; i++)
    {
        scanf("%d %d", &n1, &n2);

        jogadentro(n1, n2, stg);
        stg[0] = '\0';
    }

    return 0;
}
