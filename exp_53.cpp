
#include <string.h>
#include <stdio.h>

int main()
{
   int i=0,j,k,f=-1;
   char str[1000];
   char str2[10][100];
   char *token;

   char vc[][2][1000]={
                       "HI", "Hi Fima!",
                       "Hi", "Hi Fima!",
                       "hi", "Hi Fima!",
                       "aakash", "Hmm, Bolo!",
                       "Aakash", "Hmm, Bolo!",
                       "AAKASH", "Hmm, Bolo!",
                       "love", "I love you too :*",
                       "Love", "I love you too :*",
                       "LOVE", "I love you too :*",

                     };

   gets(str);

   token = strtok(str, " ");

   while( token != NULL )
   {
      strcpy(str2[i], token);

      token = strtok(NULL, " ");

      i++;
   }

   j=i;

   for(i=0; i<j; i++)
   {
       for(k=0; k<9; k++)
        {
            if(!strcmp(str2[i], vc[k][0]))
            {
                printf("%s\n", vc[k][1]);
                f=1;
                break;
            }
        }

        if(f==1)
            break;
   }

   main();

   return(0);
}
