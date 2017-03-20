#include<stdio.h>
#include<string.h>

char* extractDate(char *s)
{
    char* a;

    for(int i=0; i<strlen(s); i++)
    {
        if(s[i]==':')
        {
            int m=0;

            for(int j=i+1; j<strlen(s); j++)
            {
                if(s[j]==' ')
                    break;
                else
                {
                    a[m]=s[j];
                    m++;
                }

            }
        }
    }

    return a;

}

int main()
{
    char* s={"  Date:16/2/2016   "};

    printf("%s", extractDate(s));
}
