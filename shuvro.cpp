#include<stdio.h>
#include<string.h>

int main()
{
    FILE* f1;
    FILE* f2;

    char s[1000],ch, str[1000];

    f1=fopen("append.txt","w");
    f2=fopen("other.txt","w");


    printf("Enter a  string for the file to be appended:\n");

    gets(str);

    fprintf(f1,"%s\n", str);

    fclose(f1);

    printf("Enter a string to append on the previous file:\n");
    gets(s);

    fprintf(f2,"%s\n", s);

    fclose(f2);


    f1=fopen("append.txt","a");
    f2=fopen("other.txt","r");

    while(fscanf(f2,"%c", &ch)!=EOF)
    {
        fprintf(f1,"%c", ch);
    }

    fclose(f1);
    fclose(f2);

    printf("The apended file is:\n\n");

    f1=fopen("append.txt","r");
    while(fscanf(f1,"%c", &ch)!=EOF)
    {
        printf("%c", ch);
    }

    fclose(f1);

}
