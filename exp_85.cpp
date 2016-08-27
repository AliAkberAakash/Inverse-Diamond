#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter three numbers:\n");

    scanf("%d %d %d", &a, &b, &c);

    printf("The smallest number is :\n\n");

    if(a<b&&a<c)
        printf("%d\n", a);
    else if(b<c&&b<a)
        printf("%d\n", b);
    else
        printf("%d\n", c);

    return 0;
}

