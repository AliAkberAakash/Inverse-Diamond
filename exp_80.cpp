#include<stdio.h>

int power(int x, int n)
{
    if(n==1)
        x=x;
    else
        x=x*power(x,n-1);
    return x;
}

int main()
{
    int x,n;

    scanf("%d %d", &x, &n);

    printf("%d\n", power(x,n));

    return 0;
}
