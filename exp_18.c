#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char files();

struct records
{
    char name[15];
    int age;
    char sex[10];
}i;

char files()
{
    struct records i;

    printf("Enter name:\n");
    gets(i.name);
    printf("Enter age:\n");
    scanf("%d", &i.age);
    printf("Enter sex(M/F)?:\n");
    scanf("%s", &i.sex);

    char fname[20];
    sprintf(fname, "%s.txt", &i.name);
    FILE *f1;

    f1=fopen(fname, "a");
    fprintf(f1,"\n%s\n%s\n%s\n", i.name,i.age,i.sex);
}


int main()
{
    char des;

    files();

    printf("Do you want to continue?(y/n)\n");

    if((des=getchar())=='y')    files();
    else
    {
        system("cls");
        printf("***END***");
    }
    return 0;
}
