#include<stdio.h>

int main()
{
    int a[1000],d,i=0;

    printf("Enter any decimal number:\n");
    scanf("%d", &d);

    while(d)
    {
        a[i]=d%2;
        d=d/2;
        i++;
    }
    i--;

    while(i>=0)
    {
        printf("%d", a[i]);
        i--;
    }

}
