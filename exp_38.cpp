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
    int i,j,k,t;
    char s[1000];


    while(gets(s))
    {
    printf("\n\n%d\n\n", strlen(s));

    for(i=0; i<strlen(s); i++)
    {

        t=s[i];
        frq[t][0]=t;
        frq[t][1]++;
    }

        for(i=0; i<129; i++)
    {
        for(j=0; j<129-i; j++)
        {
            if(frq[j][1]>frq[j+1][1])
            {
                t=frq[j][1];
                k=frq[j][0];
                frq[j][1]=frq[j+1][1];
                frq[j][0]=frq[j+1][0];
                frq[j+1][1]=t;
                frq[j+1][0]=k;
            }
        }
    }

        for(i=32; i<129; i++)
    {
        //if(frq[i][1])
        printf("%d %d\n", frq[i][0],frq[i][1]);
    }

    }

    return 0;

}

