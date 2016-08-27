#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    long long int b[10000],N,M,x=0,y=0,z;
    int i,j;


    while(scanf("%lld",&N)==1)
    {

        printf("%lld",N);

        for(i=1; i<=N; i++)
            scanf("%lld", &b[i]);

        scanf("%lld", &M);

        z=100000;

        for(i=1; i<=N; i++)
        {
                for(j=i+1; j<=N; j++)
            {
                if(b[i]+b[j]==M)
                {
                    if(abs(b[i]-b[j])<z)
                    {
                        x=b[i];
                        y=b[j];
                        z=abs(b[i]-b[j]);
                    }
                }
            }
        }


    }

    if(x>y)
        printf("Peter should buy books whose prices are %lld and %lld.\n\n", y,x);
    else
        printf("Peter should buy books whose prices are %lld and %lld.\n\n", x,y);

    return 0;

}
