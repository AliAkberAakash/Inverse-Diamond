#include<stdio.h>
#include<string.h>

char* extractDate(char s[])
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

struct info
{
    char date[10000];
    char semester[10000];
    char college[10000];

}result[100];

int main()
{
    FILE* f1=NULL;

    char a, b[100000], dateline[100000];

    f1=fopen("filr.txt","r");

    int k=0,m=0,n=0;

    while(fscanf(f1,"%c", &a)!=EOF)
    {
        //extract(a);
        if(a!='\n')
        {
            b[k]=a;
            k++;
        }
        else
            {
                m++;
                b[k]='\0';
                k=0;
                if(m==6)
                {
                    strcpy(result[n].date, extractDate(b));
                    n++;
                }
//                    printf("%s\n", b);

            }

        if(m>50)
            break;

    }

    //strcpy(result[0].date, extractDate(b))

    printf("%s", result[0].date);

    fclose(f1);

    return 0;

}
