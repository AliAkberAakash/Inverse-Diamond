#include<stdio.h>
int main()
{
    int i,t;


    scanf("%d", &i);

    for(; i!=0; )
    {
        t=i%10;
        i=i/10;
        printf("%d", &t);
    }

}
