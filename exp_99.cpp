#include<stdio.h>

int swp(int *x, int *y)
{
    int maxi=-99999,i;

    for(i=0; i<*y; i++)
        if(*(x+i)>maxi)
        maxi=*(x+i);

    return maxi;
}


int main()
{
    int a[1000], b, i;

    scanf("%d", &b);

    for(i=0; i<b; i++)
        scanf("%d", &a[i]);

    printf("%d\n",swp(a,&b));




    return 0;
}
