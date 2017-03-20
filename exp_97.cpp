#include<stdio.h>

int main()
{
    int a=128;

    int *p=&a;

    char *q, *r, *s, *t;

    q = (char*) p;
    r=q+1;
    s=q+2;
    t=q+3;


    printf("%08d %08d %08d %08d\n", *t, *s, *r, *q);

    return 0;
}
