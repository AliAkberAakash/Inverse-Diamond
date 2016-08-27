
#include<stdio.h>
#include<string.h>


int main()
{
    char *s;

    gets(s);

    int i,n=0,l=strlen(s);

    for(i=1; i<=l; i++)
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
    return 0;
}

