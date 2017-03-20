#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{
    char a[100000];
    int k=0;

    gets(a);

    for(int i=0; i<strlen(a); i++)
        {
            k=k+((int)a[i]-48)*(pow(2,(strlen(a)-i-1)));
            printf("%dx2^%d\n", (int)a[i]-48, strlen(a)-i-1);
        }

    printf("%d", k);

    return 0;
}
