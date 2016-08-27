#include<stdio.h>
#include<string.h>

 int main()
 {
      char str1[]="Pointers are fun to use.";
      char str2[100], *p1, *p2;

      p1 = str1+strlen(str1)-1;

      printf("%c", p1);

      return 0;
 }
