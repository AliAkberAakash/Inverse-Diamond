#include<stdio.h>


int main()
{
    int a;

    scanf("%d", &a);

    if(a>=0&&a<=32)
        printf("F\n");
    else if(a>=33&&a<=49)
        printf("D\n");
    else if(a>=50&&a<=59)
        printf("C\n");



    return 0;
}
