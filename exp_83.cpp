#include<stdio.h>
#include<math.h>

 int main()
 {
     double a,b,c,x1,x2;

     printf("Enter the co-efficients a,b & c\n");
     scanf("%lf %lf %lf", &a, &b, &c);

     if(a==0&&b==0)
        printf("No Solution!\n");
     else if(a==0)
        printf("x = %lf\n", -(c/b));
     else if((b*b-4*a*c)>=0)
     {
         x1=(b+sqrt(b*b-4*a*c))/2*a;
         x2=(b-sqrt(b*b-4*a*c))/2*a;

         printf("Two real roots Are x1= %lf and x2= %lf\n", x1, x2);
     }
     else
        printf("No Real Roots!\n");

     return 0;
 }

