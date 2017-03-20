#include<stdio.h>
#include<string.h>

void print(char b[])
{
    printf("%d\n", strlen(b));
}

int main()
{
    char b[100000];

    gets(b);

    print(b);

    return 0;
}
