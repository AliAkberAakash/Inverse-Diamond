#include<stdio.h>
#include<math.h>

int main()
{
   int a[100000];
   int b[100000];
   int c[100000];

   int i,j,n,m;

   printf("Enter the number of elements in first array:\n");

   scanf("%d", &n);

   printf("Enter the elements of first array\n");

   for(i=0; i<n; i++)
       scanf("%d", &a[i]);

   printf("Enter the number of elements in second array:\n");

   scanf("%d", &m);

   printf("Enter the elements of second array\n");

   for(i=0; i<m; i++)
       scanf("%d", &b[i]);

   for(i=0; i<n; i++)
       c[i]=a[i];

    int k=i;
   for(j=0; j<m; j++)
   {
       c[k]=b[j];
       k++;

   }

   int temp;


    for(i=0; i<k; i++)
    {
        for(j=i+1; j<k; j++)
        {
            if(c[i]>c[j])
            {
                temp= c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }

    printf("\n\nThe sorted array is:\n\n");

    for(i=0; i<k; i++)
        printf("%d ", c[i]);

    return 0;
}
