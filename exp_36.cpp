#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long int b[10000],N,M,x,y,z;
    int i,j,tc;

    scanf("%d", &tc);
    printf("%d\n\n", tc);


    while(tc--)
    {
        scanf("%d", &N);
        printf("%d\n\n", N);

        for(i=1; i<=N; i++)
            scanf("%d", &b[i]);

        for(i=1; i<=N; i++)
            printf("%d  ", b[i]);

    }

    return 0;

}
