/*
Program Name:
Details:
Solved By: Liverwort
Date:
*/

#include<cstdio>
#include<cstdlib>
#include<iostream>


int main()
{
    using namespace std;

    int n,i;

    scanf("%d", &n);

    int *ara=(int *) malloc(n*sizeof(int));

    for(i=0; i<n; i++)
        scanf("%d", &ara[i]);

    while(i--)
        printf("%d", ara[i]);

    free(ara);


    return 0;
}

