#include<stdio.h>
int main()
{
    int k=0, x=0;
    while(k>25)
    {
        if(k%5==0)
        {
            x+=k;
            printf("%d",x);
        }
        k++;
    }

    printf("\nx=%d", x+k);

    return 0;
}
