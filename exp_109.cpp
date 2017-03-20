/**
Program name : uva 11777  (I found this problem on UVa online judge site...problem no. 11777)
Solved On : 13/03/2017
Solved By : Farhana Ahmed Fima
**/

#include<stdio.h>
int main ()
{
    int n,i,a,b,c,d,e,f,g,total=0,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
        if((e>=f) &&(g>=f))
            total=(e+g)/2;
        else if((f>=e) && (g>=e))
            total=(f+g)/2;
        else
            total=(e+f)/2;
        sum=a+b+c+d+total;
        if(sum>=90)
            printf("Case %d: A\n",i);
        else if(sum>=80)
            printf("Case %d: B\n",i);
        else if(sum>=70)
            printf("Case %d: C\n",i);
        else if(sum>=60)
            printf("Case %d: D\n",i);
        else
            printf("Case %d: F\n",i);
    }
    return 0;
}
