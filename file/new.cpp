#include<stdio.h>

int main()
{
    FILE* f1;

    char a;

    f1=fopen("filr.txt","r");

    while(fscanf(f1,"%c", &a)!=EOF)
    {
        printf("%c", a);
    }

    fclose(f1);

    return 0;

}
