// write a program to c and find sum average array element

#include<stdio.h>
int main()
{
 int arr[20],i,n,sum = 0;
 float ave;
 printf("enter number of element:");
 scanf("%d",&n);
 for ( i = 0; i < n; i++)
 {
  printf("Enter element:");
  scanf("%d",&arr[i]);
 }
 for ( i = 0; i < n; i++)
 {
     sum+=arr[i];
 }
 printf("sum is :%d \n",sum);
 printf("Averege is %d",sum/n);
}