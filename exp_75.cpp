#include<stdio.h>
int main()
{
    char c;
    int a,b,s;
    scanf(" %d %c %d",&a,&c, &b);
    //scanf("%c",&c);
    switch(c)
    {
    case '+':
        s=a+b;
        break;
    case '-' :
        s=a-b;
        break;
    default :
        printf("error");
    }
    printf("%d",s);


    return 0;
}

