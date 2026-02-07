// // write a program to c and find sum average array element

// #include<stdio.h>
// int main()
// {
//  int arr[20],i,n,sum = 0;
//  float ave;
//  printf("enter number of element:");
//  scanf("%d",&n);
//  for ( i = 0; i < n; i++)
//  {
//   printf("Enter element:");
//   scanf("%d",&arr[i]);
//  }
//  for ( i = 0; i < n; i++)
//  {
//      sum+=arr[i];
//  }
//  printf("sum is :%d \n",sum);
//  printf("Averege is %d",sum/n);
// }

#include<stdio.h>
int main(){
    int arr[5] = {2,4,6,8,12};
    int i,sum = 0;
    for ( i = 0; i < 5; i++)
    {
        sum+=arr[i];
        printf("%d \n",sum);
    }
    printf("%d",sum);
 return 0; 
}