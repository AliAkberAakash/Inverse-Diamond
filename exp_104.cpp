#include<cstdio>
#include<cstring>
#include<iostream>


int main()
{
   char c[]="aakash";
   char* a=c;

   while(*a!='\0')
   {
       printf("%c ", *a);
       a++;
   }

    return 0;
}

