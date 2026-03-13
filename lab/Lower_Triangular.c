#include<stdio.h>
int main(){
    int arr[3][3],i,j; // 1 0 0 4 5 0 7 8 9
    for ( i = 0; i <3; i++)
    {
        for (j = 0; j <3; j++)
        {
            printf("Enter element for Row %d , column %d:",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    
    for ( i = 0; i <3; i++)
    {
        for (j = 0; j <3; j++)
        {
            printf("%d",arr[i][j]);
            
        }
        printf("\n");
    }
    
}