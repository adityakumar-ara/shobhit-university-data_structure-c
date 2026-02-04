// Write a program to insert a element at specific position

// #include<stdio.h>
// int main(){
//     int arr[20];
//     int n,pos,i,x;
//     printf("Enter NUmber of element:");
//     scanf("%d",&n);
//     for ( i = 0; i < n; i++)
//     {
//         printf("Enter elemnt:");
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter new element");
//     scanf("%d",&x);
    
//     printf("Enter position");
//     scanf("%d",&pos);
//     n+=1;
//     for ( i = n; i >= pos; i--)
//     {
//         arr[i] = arr[i-1];
//     }
//     arr[pos-1] = x;
//     for ( i = 0; i < n; i++)
//     {
//         printf("%d",arr[i]);
//     }
//   return 0;  
    
// }

// #include<stdio.h>
//   int main(){
//   int arr[20],n,x,pos,i;
//   printf("Enter number of element");
//   scanf("%d",&n);
//   for ( i = 0; i < n; i++)
//   {
//     printf("Enter element:");
//     scanf("%d",&arr[i]);
//   }
//   printf("Enter new number:");
//   scanf("%d",&x);
//   printf("Enter position:");
//   scanf("%d",&pos);
//   n+=1;
//   for ( i = n; i >= pos; i--)
//   {
//     arr[i] = arr[i-1];
//   }
//   arr[pos-1] = x;
//   for ( i = 0; i < n; i++)
//   {
//     printf("%d",arr[i]);
//   }
//  return 0;
// }