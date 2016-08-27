#include<stdio.h>
int main ()

{
    int i,n;
    int ara[1000];
    printf("Enter the total number of elements here (1 to 1000) : ");
    scanf("%d",&n);
    printf("\n");
    printf("Enter the integers : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ara[i]);
        printf("%d",ara[i]);
    }
    printf("\n");
    for(i=1;i<n;i++)
    {
        if(ara[0]<ara[i])
            ara[0]=ara[i];
    }
    printf("The largest element of the given array is : %d",ara[0]);
    return 0;
}
