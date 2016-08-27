#include<stdio.h>
int main()
{
    int a,b,c;
    scanf(" %d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("a : %d",a);
        else printf("c : %d",c);

    }
     else
     {
         if(b>c)
            printf(" b: %d",b);
         else printf( " c :%d",c);

     }

    return 0;
    }
