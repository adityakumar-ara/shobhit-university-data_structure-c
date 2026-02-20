#include<stdio.h>
int main()
{
    int arr[20],i,n;
    printf("enter nuber of elements:");
    scanf("%d",&n);
    printf("enter elements");
    for ( i = 0; i < n; i++)
    {
      scanf("%d",&arr[i]); 
    }
    for ( i = 0; i < n; i++)
    {
       printf("%d\n",arr[i]);
    }
    
   
   return 0;

}