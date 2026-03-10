// #include<stdio.h>
// int  main(){
//     int arr[] = {1,3,4,2,5,7,8,9,55};
//     int s = sizeof(arr)/sizeof(arr[0]);
//     // printf("%d",s);
//     for (int i = 0; i < s-1; i++)
//     {
//         int min = i;
//         for (int j = i+1; j < s; j++)
//         {
//             if (arr[j] < arr[min])
//             {
//                 min = j;
//             }

//         }
//         int temp = arr[min];
//         arr[min]=arr[i];
//         arr[i]=temp;

//     }
//     printf("sorting array");
//     for (int i = 0; i < s; i++)
//     {
//         printf("%d",arr[i]);
//     }

//    return 0;
// }

#include <stdio.h>
int main()
{
    int arr[] = {66, 77, 44, 33, 88, 99, 200, 100};
    int i, j, min, temp;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
    printf("selection sort array:");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}