#include<stdio.h>

int main()
{
    int a,b,s;

    while(scanf("%d %d", &a, &b)!=EOF)
    {
        if(a>b)
            s=a-b;
        else
            s=b-a;

        printf("%d\n", s);
    }

    return 0;
}

