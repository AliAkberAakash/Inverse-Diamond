#include<stdio.h>
int main ()

{
    int i,n,m;
    for(n=1;n<=5;n++)

    {
        for(m=5;m>=n;m--)
        {
            printf(" ");
        }

            for(i=1;i<=n;i++)
            {
                printf("*");
            }
        printf("\n");
    }
    return 0;

}
