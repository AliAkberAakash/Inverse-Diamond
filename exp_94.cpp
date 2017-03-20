#include<stdio.h>
#include<math.h>

int factorial(int x)
{
    int i,k;

    k=1;
    for(i=x; i>=1; i--)
        k=k*i;

    return k;
}


int main()
{
    int n,i,j,a;

    double s;

    scanf("%d %d", &n, &a);

    j=1;
    s=0;
    for(i=1; i<=n; i++)
    {
        if(i%2==1)
            s=s+(pow(a,j)/factorial(j));

        else
            s=s-(pow(a,j)/factorial(j));

            j=j+2;
    }


    printf("%lf\n", s);


    return 0;
}
