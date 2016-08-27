/*This is a C program which can take an integer number as an input and convert it
to a binary number as an output...
Solved By : Farhana Ahmed Fima
Date : 04.07.16
*/
#include<stdio.h>
int main ()

{
    long long int i,a,b,c,r=0, count=0;
    printf("Please enter an integer number:\n");
    scanf("%lld",&a);
    while(a!=0)
    {
        b=a%2;
        r=r*10+b;
        if(r==0)
            count++;
        a=a/2;
    }
    printf("The binary value of the given integer is:\n");

    while(r!=0)
    {
        c=r%10;
        r=r/10;
        printf("%lld",c);
    }

    for(i=0; i<count; i++)
        printf("0");

    printf("\n");
    main();
    return 0;
}
