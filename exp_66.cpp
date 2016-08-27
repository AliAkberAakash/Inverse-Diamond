//find the summation of 1+(1/2)+(1/4)+(1/8)+............
#include<stdio.h>
#include<math.h>
int main ()

{
    int i,n,y;
    double x,sum=1;

    scanf("%d",&n);

    for (i=1;i<n;i++)
    {
        y= pow (2,i);
        x= 1.0/y;
        sum=sum+x;
    }
    printf("%lf\n",sum);
    return 0;
}
