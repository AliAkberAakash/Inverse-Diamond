/*
Program Name:
Details:
Solved By: Liverwort
Date:
*/

#include<cstdio>
#include<cstring>
#include<iostream>


int main()
{
    using namespace std;

    int i=0;
    char *str1, *words;
    char str2[100][1000];

    gets(str1);

    words=strtok(str1," ");

    while(words != NULL)
    {
        strcpy(str2[i],words);

        words=strtok(NULL," ");

        i++;
    }

    i=0;

    while(str2[i] != NULL)
    {
        printf("%s ", str2[i]);
        i++;
    }

    return 0;
}

