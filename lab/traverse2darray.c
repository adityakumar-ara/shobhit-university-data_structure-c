// #include<stdio.h>
// int main(){
//     int arr[2][2],i,j;
//     printf("enter elements:");
//     for ( i = 0; i < 2; i++)
//     {
//         for ( j = 0; j < 2; j++)
//         {
//             scanf("%d",&arr[i][j]);
    
//         }
        
//     }
//     for ( i = 0; i < 2; i++)
//     {
//         for ( j = 0; j < 2; j++)
//         {
//             printf("%d",arr[i][j]);
//         }
//       printf(" \n ");
//     }
//     return 0;
   
// }

#include<stdio.h>
int main(){
    int arr[3][3],i,j;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("Enter element for Row %d, Col %d: ", i, j);
            scanf("%d", &arr[i][j]);
    
        }
        
    }
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d",arr[i][j]);
        }
      printf(" \n ");
    }
    return 0;
   
}