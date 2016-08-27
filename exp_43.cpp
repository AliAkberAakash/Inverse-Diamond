#include<stdio.h>

int main()
{
    int m1,i,j,n,d,s[10];

            m1=-150001;

            scanf("%d", &n);

        for(i=0; i<n; i++)
        {

            d=s[n-1];

            scanf("%d", &s[i]);

           if((s[i]!=d)&&(s[i]>m1))
            {
                m1=s[i];
                j=i;
            }

        }

        printf("%d  %d\n", m1, j);

        return 0;
}
