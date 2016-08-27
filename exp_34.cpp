#include<stdio.h>


int main()
{
    long long int t,i,j,n,k,d,a[1000], b[1000];
    scanf("%d", &t);

    while(t--)

    {
        k=0;
        scanf("%d", &n);

        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }

        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
               {
                b[k]=a[i]-a[j];
                printf("%d", b[k]);
                k++;
               }

        }
        k--;

        for(i=0; i<k; i++)
        {
            for(j=0; j<k-i; j++)
                if(b[j]<b[j+1])
            {
                d=b[j];
                b[j]=b[j+1];
                b[j+1]=d;
            }
        }

        printf("\n%d", b[0]);

    }

    return 0;
}
