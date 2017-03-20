#include<stdio.h>
#include<math.h>

int main()
{
    long long int s=0,i,d=0,n;

    scanf("%lld", &n);


    for(i=0; i<=31; i++)
        {
            s=s+pow(2,i);
            d=s+pow(2,(i+1));
            if(n>=s&&n<=d)
            {
                if(n-d==1)
                    printf("1");
                else
                    printf("0");

                break;
            }

        }

    return 0;
}
