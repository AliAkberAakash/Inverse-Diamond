
#include<stdio.h>
#include<math.h>

 int main()
 {
    int i,n;
    double s=0;

    printf("Enter the number of steps:\n", s);
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        s=s+(1.0/pow(2,i));
    }

    printf("The sum of the harmonic series is: %.2lf\n", s);

     return 0;
 }

