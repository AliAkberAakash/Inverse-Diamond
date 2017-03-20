#include<stdio.h>

void f1()
{
    static int c=5;
    printf("Count=%d\n", c--);

    if(c)
        f1();
}


int main()
{
    f1();

    return 0;
}
