#include<stdio.h>

int main()
{
    int i,n;
    float s=0;

    printf("Enter the value of n:\n");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        s=s+(1.0/(i*i));
    }

    printf("The sum is : %f\n", s);

    return 0;

}
