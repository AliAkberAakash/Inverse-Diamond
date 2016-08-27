/*
*
* Program Name:
* Details:
* Solved By: Liverwort
* Date:
*
*/

#include<iostream>
#include<cstring>
#include<cstdio>
int is_in(char *s,  char c);


int is_in(char *s,  char c)
{
while(*s)
if(*s==c) return 1;
else s++;
return 0;
}


int main()
{
    using namespace std;

    char *str, ch;

    gets(str);

    is_in(str, ch);

    return 0;
}

