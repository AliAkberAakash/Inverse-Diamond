#include<stdio.h>
int main ()

{
    int i,m,n,x;
    scanf("%d",&x);
    for(n=1;n<=x;n++)
    {
        if(n%2!=0)
        {
            for(m=x-2;m>=n;m=m-2)
            {
                printf(" ");
            }
            for(i=1;i<=n;i++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
     for(n=x-2;n>=1;n--)
    {
        if(n%2!=0)
        {
            for(m=x-2;m>=n;m=m-2)
            {
                printf(" ");
            }
            for(i=1;i<=n;i++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
