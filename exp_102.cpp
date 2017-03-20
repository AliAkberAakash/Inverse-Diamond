#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,s,area;

    scanf("%lf %lf %lf", &a, &b, &c);

    if((a+b)>c&&(b+c)>a&&(c+a)>b)
    {
        s=(a+b+c)/2.0;

        area=sqrt(s*(s-a)*(s-b)*(s-c));

        printf("The area is %lf\n", area);
    }
    else
    {
        printf("It is not a triangle\n");
    }

    return 0;
}
