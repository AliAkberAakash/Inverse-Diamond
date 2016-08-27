#include<stdio.h>

int main()
{
    int i,n,b[100000];

    scanf("%d", &n);

    b[0]=0; b[1]=1;

    for(i=2; i<n; i++)
        b[i]=b[i-1]+b[i-2];
    for(i=0; i<n; i++)
        printf("%d ", b[i]);

}
