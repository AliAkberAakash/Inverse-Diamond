#include<stdio.h>

int main()
{
    int a[50];
    int b[50];
    int c[80];
    int d[80];
    int i=0,j=0,n,k;

    Aakash1:
    scanf("%d", &a[i]);
    switch(a[i])
    {
    case (1||2||3||4||5||6||7||8||9||0) :
        i++;
        goto Aakash1;
        break;
    case '+' :
        goto Aakash2;
        break;
    }
   Aakash2:

       scanf("%d", &b[j]);
    switch(b[j])
    {
    case (1||2||3||4||5||6||7||8||9||0) :
        j++;
        goto Aakash2;
        break;
    case '=' :
        break;
    }
        while(i>=0)
        {
            printf("%d", a[i]);
            i--;
        }

        while (j>=0)
            printf("%d", b[i]);
            j--;
}
