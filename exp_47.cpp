#include<stdio.h>
#include<math.h>

int main()
{
    int a[10000],c=0,f,i,j,n,s;

    scanf("%d", &n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    for(i=0; i<n; i++)

    {
        f=1;
        s=sqrt(a[i]);

        for(j=2; j<=s; j++)
        {
            if(a[i]%j==0)
            {
                f=2;
                break;
            }
        }
        if(f==1)
            {
                printf("%d ", a[i]);
                c++;
            }

    }

    printf("\n%d\n", c);

    return 0;

}
