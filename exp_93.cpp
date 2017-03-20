#include<stdio.h>

int power(int x, int n)
{
    if(n==1)
        return x;

    else if(n==0)
        return 1;

    else if(n>1)
    {
        n--;
        return x*power(x,n);
    }

    else
        printf("Plese Enter positive numbers only\n");


}

int main()
{
    int a,b;

    scanf("%d %d", &a, &b);

    printf("%d\n", power(a,b));

    return 0;
}
