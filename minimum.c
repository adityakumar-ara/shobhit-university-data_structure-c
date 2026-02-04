#include<stdio.h>
int main(){
    int arr[20],n,i,min;
    printf("Enter number of element:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter element:");
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    for ( i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
            min = arr[i];
        }
        
    }
  printf("%d",min);
  return 0;   
}