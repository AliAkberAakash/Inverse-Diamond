#include<stdio.h>
int main()
{
    int i;
    char (*s[7])[50]={"Bangla","English","Math","Physics","Chemistry","Biology","ICT"};
    for(i=0;i<7;i++)
    printf("%s", *s[i]);
    return 0;
}
