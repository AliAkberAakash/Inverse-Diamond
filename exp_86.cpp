#include<stdio.h>

int main()
{
    int a,i, s=0;

    printf("Enter a number\n");

    scanf("%d",&a);

    while(a)
    {
        s=s+(a%10);
        a=a/10;
    }

    printf("The sum of the numbers are: %d\n", s);

    return 0;
}
