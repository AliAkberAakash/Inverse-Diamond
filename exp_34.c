#include<stdio.h>

int main()
{
    int i,j,k,d[1000];

    scanf("%d", &k);

    for(i=1; i<=k; i++)
        scanf("%d", &d[i]);

    for(i=1; i<=k; i++)
        {
            for(j=1; j<=(k-i); j++)
                if(c[j]>c[j+1])
                {
                    temp=d[j];
                    d[j]=d[j+1];
                    d[j+1]=temp;
                }
        }

    for(i=1; i<=k; i++)
            {
                printf("%d ", d[i]);
            }
}
