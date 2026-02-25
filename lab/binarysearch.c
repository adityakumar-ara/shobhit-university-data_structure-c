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

#include <stdio.h>

int main()
{
    int i, first, last, middle, n, search, arr[100];
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter elements (must be sorted): ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("\nEnter value to find: ");
    scanf("%d", &search);
    
    first = 0;
    last = n - 1;
    
    middle = (first + last) / 2; 

    while (first <= last)
    {
        if (arr[middle] < search)
        {
            first = middle + 1;
        }
        else if (arr[middle] == search)
        {
        
            printf("%d found at location %d\n", search, middle + 1); 
            break;
        }
        else
        {
            last = middle - 1;
        }
        
        // Next check ke liye middle ko update karein
        middle = (first + last) / 2; 
    }
    
    if (first > last)
    {
        printf("%d is not found in the array\n", search); 
    }
    
    return 0;
}