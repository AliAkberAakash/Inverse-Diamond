#include<stdio.h>

int main()
{
    int a,b,c,d=0;

    for(a=1,b=10; a<=b; a++,b--)
    {
        c=b/a;

        printf("%d %d %d\n", a, b, c);
    }
    printf("%d\n", d);

    return 0;
}
