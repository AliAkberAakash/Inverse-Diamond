
#include<stdio.h>
#include<string.h>


int main()
{
    char s[100000];
    int i,n=0,l,k=1;

    while(gets(s))
{
    l=strlen(s);

    if(k!=1)
        printf("\n");

        k=2;

    for(i=0; i<l; i++)
    {

        if(s[i]=='"')
        {
            n++;
            if(n%2!=0)
                printf("``");
            else
                printf("''");
        }

        else
            printf("%c", s[i]);

    }
}
    return 0;
}

