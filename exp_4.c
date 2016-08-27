#include<stdio.h>
oldMain();
int main()
{
    while(1)
        oldMain();
}

oldMain()
{
    int a,b,c;
    scanf("%d%d", &a, &b);
    int d;
    c=a+b;
    printf("%d\n\nNew statement.\n\n", c);
}

