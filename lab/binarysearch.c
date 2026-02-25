// #include <stdio.h>
// int main()
// {
//     int a[7] = {1, 3, 2, 5, 4, 8, 6};
//     for (int i = 0; i < 7; i++)
//     {
//         for ( int j = i + 1; j < 7; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }    
//     // for ( int i = 0; i < 7; i++)
//     //     {
//     //         printf("%d", a[i]);
//     //     }
//     // -----------------------------------------------------------------------------------------------
//     int start = 0, end = 6, mid, n;
//     int found = 0;

//     printf("Enter number: ");
//     scanf("%d", &n);
//     while (start <= end) {
//         mid = (start + end) / 2; 

//         if (a[mid] == n) { 
        
//             printf("Found your number at index: %d\n", mid);
//             found = 1;
//             break;
//         } else if (a[mid] < n) {
            
//             start = mid + 1;
//         } else {
            
//             end = mid - 1;
//         }
//     }

//     if (found == 0) {
//         printf("Number not found in the array.\n");
//     }
    
//     return 0;     
// }  


#include<stdio.h>
int main()
{
    int i , first , last , middle , n , search , arr[100];
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter elements");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nenter value to find:"); 
    scanf("%d",&search);
}