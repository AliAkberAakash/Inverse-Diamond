#include<stdio.h>
#include<String.>
#include<stdlib.h>

int main()
{
    FILE* f1;
    FILE* append;

    char a[10000],c;

    append=fopen("append.txt", "w");

    printf("Enter the first file element:\n");

    gets(a);

    fprintf(append,"%s", a);

    fclose(append);

    f1=fopen("real.txt","w");

     printf("Enter the appending file element:\n");

    gets(a);

    fprintf(f1,"%s", a);

    fclose(f1);

    f1=fopen("Real.txt", "r");
    append=fopen("append.txt", "a");

    while(fscanf(f1,"%c", &c)!=EOF)
    {
        fprintf(append,"%c",c);
    }

    fclose(append);
    fclose(f1);

    append=fopen("append.txt", "r");

    system("cls");

    printf("The files have been apended\n");

    while(fscanf(append,"%c", &c)!=EOF)
    {
        printf("%c",c);
    }

    printf("\n");

    fclose(append);

    return 0;
}

