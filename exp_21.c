#include<stdio.h>
#include<string.h>

int main()
{
    char a[8]="Fima";
    char s[8],c;
    int i,j;
    int count=0, win=0;

    printf("\n\nword length: ----\n\nGuess the word(in less than 10 tries).\n");

    for(i=0; i<4; i++)
    {
       for(j=0; j<3; j++)
       {
           c=getch();

           if(c==a[i])
           {
               printf("%c", a[i]);
               count++;
               win++;
               break;
           }
           else count++;
       }

        if(win==4)
        {
            printf("\nCongratulations. You have won the game in %d tries.\n\n\n", count);
            break;
        }

        if(count>10)
           {
               printf("\nGame over. Too many tries.\n\n\n");
               break;
           }

    }
    main();
}
