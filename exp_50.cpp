#include <stdio.h>
int main ()
{
    int num1,num2,value;
    char sign;
    scanf("%d",&num1);
    scanf("%d",&num2);
    value=num1 + num2;
    sign='+';
    printf("%d %c %d= %d\n",num1,sign,num2,value);
    printf("sum is %d\n",value);
    value=num1-num2;
    sign='-';
    printf("%d %c %d=%d\n",num1,sign,num2,value);
    printf("subtract is %d\n",value);
    value=num1 * num2;
    sign='x';
    printf("%d %c %d=%d\n",num1,sign,num2,value);
    printf("multiple is %d\n",value);
    value= num1/num2;
    sign='/';
    printf("%d %c %d=%d\n",num1,sign,num2,value);
    printf("division value is %d\n",value);
    return 0;

