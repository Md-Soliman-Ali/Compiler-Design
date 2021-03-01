#include <stdio.h>
#include <stdlib.h>

int main()
{

     int a[100],n,i;
     printf("enter the number of elements in the array: ");
     scanf("%d", &n);

     for(i=0; i<n; i++)
     {

        scanf("%d", &a[i]);
     }
     printf("the array is: ");

       for(i=0; i<n; i++)
     {

       printf("%d ",a[i]);
     }

     printf("\nthe array in revers is: ");

     for(i=n-1; i>=0; i--)
     {

         printf("%d ", a[i]);
     }

    return 0;
}
