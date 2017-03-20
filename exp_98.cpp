#include<stdio.h>

int main()
{
    typedef double d;

    d a=100.50;
    d* b=&a;
    d** c=&b;
    d*** e=&c;


    printf("%d %d %d\n", b,c,e);
    printf("%lf\n", ***e);

    return 0;
}
