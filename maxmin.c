// write a program to c find maximum and minimum number in array


// #include<stdio.h>
// int main(){
//     int arr[20],max,min,i,n;
//     printf("enter number of element:");
//     scanf("%d",&n);
//     for ( i = 0; i < n; i++)
//     {
//         printf("enter element:");
//         scanf("%d",&arr[i]);
//     }
//     max = arr[0];
//     min = arr[0];
//     for (i = 1; i < n; i++) {
//         // Check for new maximum
//         if (arr[i] > max) {
//             max = arr[i];
//         } 

//         // Check for new minimum
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }
//     printf("\n maximum number is :%d",max);
//     printf("\n minimum number is :%d",min);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[20],i,n,max,min;
//     printf("Enter number of element");
//     scanf("%d",&n);
//     for ( i = 0; i < n; i++)
//     {
//         printf("Enter elements of array:");
//         scanf("%d",&arr[i]);
//     }
//     max = arr[0];
//     min = arr[0];
//     for ( i = 0; i < n; i++)
//     {
//         if (arr[i]> max)
//         {
//             max = arr[i];
//         }
        
//     }
//     for ( i = 0; i < n; i++)
//     {
//         if (arr[i]< min)
//         {
//             min = arr[i];
//         }
        
//     }
//     printf("maximum number is :%d \n",max);
//     printf("minimun number is :%d \n",min);
// }