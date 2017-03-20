#include<stdio.h>

int binary(int x)
{
    int b, k=0, m[10000];
    while(x)
    {
        m[k]=x%2;
        x=x/2;

        k++;
    }

    b=0;

    while(k--)
        b=b*10+m[k];

    return b;
}


int main()
{
    int a;
    int *pa=&a;
    char *p,*q,*r,*s;

    scanf("%d", &a);

    p=(char*)pa;
    q=p+1;
    r=p+2;
    s=p+3;

    printf("%08d %08d %08d %08d\n", binary(*s), binary(*r), binary(*q), binary(*p));

    return 0;
}
