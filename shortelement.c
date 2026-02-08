// #include<stdio.h>
// int main(){
//     int arr[10] = {1,3,5,4,2,6,7,8,9,10};
//     int i,j,temp;
//     for ( i = 0; i < 10; i++)
//     {
//         for (j = i + 1; j < 5; j++)
//         {
//             if (arr[i]>arr[j])
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
            
//         }
        
//     }
//     for ( i = 0; i < 10; i++)
//     {
//      printf("%d ",arr[i]);   
//     }
//   return 0;  
// }

// ----------------------------------------------------------------------------------------------

#include<stdio.h>
int main(){
    int a[20],n,i,j,temp;
    printf("Enter number of element:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter element%d:",i+1);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            
        }
        
    }
    printf("Array elements :");
    for ( i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
 return 0;   
    
}