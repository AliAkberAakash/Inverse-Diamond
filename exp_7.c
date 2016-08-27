#include<stdio.h>
int main()
{
    char a[20], b[20],  c[40];
    int i,j;
    for(i=0; i<20; i++)
    {
        scanf("%d", &a[i]);

    }
    while(i>=0)
    {
        printf("%d", a[i]);
        i--;
    }

    d[0]=0;

    for(k=0;j>=0&&i>=0&&k<=i; j--,i--,k++)
    {
        c[k]=(a[i]+b[j]+d[k])%10;
        d[k]=(a[i]+b[j]+d[k])/10;
    }
    while(k>=0)
    {
        printf("%d", c[k]);
        k--;
    }
}





