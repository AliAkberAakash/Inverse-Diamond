#include<stdio.h>

int main()

{
    int i,j,n,c=0,p=0;

    scanf("%d", &n);

    /**
    1st part starts
    **/

    for(i=0; i<n; i++)
    {
        for(j=1; j<((n*2)/3)-c; j++)
            {
                printf("%d", j);
            }

        for(j=0; j<((n*2)/5)-i; j++)
            {
                printf("%d", j);
            }

        for(j=0; j<=(i*2)-1; j++)
            printf(" ");

        for(j=((n*2)/6)-i; j>=0; j--)
            {
                printf("%d", j);
            }

        for(j=((n*2)/3)-c-1; j>0; j--)
            {
                printf("%d", j);
            }

        if(i>=((n*2)/5))
            c++;

        printf("\n");
    }

    /**
    2nd part starts
    **/

    c=0;

        for(i=0; i<n-1; i++)
    {
        for(j=1; j<=i+2-c; j++)
            printf("%d", j);

        if(i>=(n/2))
                c++;

        if(i>(n/2))
            {
                for(j=0; j<c-1; j++)
                printf("%d", j);
                p++;
            }

        for(j=n*2-4; j>i*2; j--)
            printf(" ");

        if(i>(n/2))
            {
                for(j=p-1; j>=0; j--)
                printf("%d", j);
            }

        for(j=i+2-p; j>=1; j--)
            printf("%d", j);



         printf("\n");
    }

    return 0;
}
