#include<cstdio>
#include<cstring>
#include<ctype.h>
#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    char** s=(char**) malloc(1000);

    for(int i=0; i<5; i++)
    {
        scanf("%[^\n]", s[i]);
        printf("%s\n", s[i]);
    }

    free(s);

    return 0;
}
