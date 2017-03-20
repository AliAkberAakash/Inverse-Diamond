#include<cstdio>
#include<Cstring>
#include<iostream>

int length(char t[])
{
    int i=0;
    while(t[i]!='\0')
    i++;

    return i;
}

int main()
{
    char t[1000];

    gets(t);

    printf("%d\n", length(t));

    return 0;
}
