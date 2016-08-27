#include<stdio.h>
#include<string.h>

int main ()

{
    int i,l,count;
    char a[100000];
    while(gets(a)!=EOF)
    {
        count = 0;
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]=='"')
            {
                count=count+1;
                if(count%2==1)
                    printf("``");
                else
                    printf("''");
            }
            else
                printf("%c",a[i]);
        }
        printf("\n");
    }
    return 0;
}

