#include<stdio.h>

int main()
{
    FILE* f1;
    FILE* f2;
    char a;

    f1=fopen("filr.txt","w");
    fprintf(f1,"dekho print kore read read kore ane dise.... okey? :p");
    fclose(f1);
    f2=fopen("filr.txt","r");
    while(fscanf(f2,"%c", &a)!=EOF)
    {
        printf("%c", a);
    }

    fclose(f2);

    return 0;

}
