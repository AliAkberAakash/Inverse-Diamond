#include<stdio.h>
#include<string.h>
int main()
{
    int l,x,i,j;
    char a[18]="immi";
    char b[18];
    l=strlen(a);
    printf("%s\n", a);

    for(i=l-1,j=0; j<l,i>=0;j++,i--)
    {
        b[j]=a[i];
        printf("%c", b[j]);
    }
    x=strcmp(a,b);
    if (x==0)
        printf("\nyes");
    else
         printf("\nno");
    return 0;
}
