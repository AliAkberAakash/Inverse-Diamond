#include<stdio.h>
#include<math.h>

int main()
{
    int t,i,j,n,k,d,a[10000], b[10000];
    scanf("%d", &t);

    while(t)

    {
        k=0;
        scanf("%d", &n);

        for(i=0;i<n; i++)
        {
            scanf("%d", &a[i]);
        }

        for(i=0;i<n; i++)
        {
            for(j=i+1;j<n;j++)
               {
                b[k]=a[i]-a[j];
                k++;
               }

        }

    t--;
    }

    return 0;
}
