#include<stdio.h>
int main ()

{
    int a,b,c;
    char sign;
    scanf("%d %c %d", &a,&sign,&b);

    if(sign=='+')
        c=a+b;
    else if(sign=='-')
        c=a-b;
    else if(sign=='x')
        c=a*b;
    else if(sign=='/')
        c=a/b;


    printf("%d %c %d = %d", a,sign,b,c);

    return 0;
}
