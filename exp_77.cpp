#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[100][100];
    int i,j,k,n;
    gets(a);
    n=strlen(a);
    j=0;
    k=0;
    for(i=0; i<n; i++)
    {
        if(a[i]!=32)
        {
            b[j][k]=a[i];
            k++;
        }
        else
            {
                k=0;
                j++;
            }
    }

    for(i=0; i<=j;i++)
    {
        puts(b[i]);
    }
}
