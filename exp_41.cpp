/*
Problem name: Tell me the Frequencies
Solved By: Liverwort
Date: 2/6/2016
*/

#include<stdio.h>
#include<string.h>

int frq[128][2];

int main()
{
    char s[100000];
    int i,j,t,k,x;


    while(gets(s))
    {
        k=0;

        for(i=0; i<strlen(s); i++)
        {
            t=s[i];
            frq[t][1]=t;
            frq[t][0]++;
        }

        for(i=32; i<129; i++)
        {
            for(j=i+1; j<129; j++)
            {
                if(frq[i][k]>frq[j][k])
                    for(x=0; x<2; x++)
                {
                    t=frq[i][x];
                    frq[i][x]=frq[j][x];
                    frq[j][x]=t;
                }
            }
        }



        for(i=33; i<129; i++)
        {
            if(frq[i][1])
            printf("\n%d %d\n", frq[i][1], frq[i][0]);
        }
    }

   return 0;

}
