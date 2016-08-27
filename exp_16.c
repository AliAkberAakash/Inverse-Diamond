#include<stdio.h>

int main()
{
int i,j,n,s;
printf("Enter the value of n:\n");
scanf("%d", &n);
j=0;
s=0;

for(i=1; i<=n+2; i=i+2)
{
j=j+i;
s=s+j;
}

printf("%d", s);
}
