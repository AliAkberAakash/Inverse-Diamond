#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int i,j,k=0;
    int carry=0;
    int a[20];
    int b[20];
    int c[40];
    a1:
    for(i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
        switch(a[i])
    {
        case(1||2||3||4||5||6||7||8||9||0) :
        goto a1;
        break;
    case 43:
        break;
    }
    }
    i--;
    b1:
    for(j=0; j<5; j++)
    {
        scanf("%d", &b[j]);
        switch(b[j])
    {
        case(1||2||3||4||5||6||7||8||9||0) :
        goto b1;
        break;
    case 61:
        break;
    }
    }
    j--;

    while(i>=0)
    {
        c[k]=(a[i]+b[i]+carry)%10;
        carry=(a[i]+b[i]+carry)/10;
        i--;
        k++;
    }
    k--;
    printf("The sum is :\n");
    while(k>=0)
    {
        printf("%d", c[k]);
        k--;
    }

}
