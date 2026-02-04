#include<stdio.h>
int main (){
    int arr[20],i,n, max;
    printf("ener number of element:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter element:");
        scanf("%d",&arr[i]);
    }
    max = arr[0];
    for ( i = 0; i < n; i++)
    {
        if (arr[i]> max)
        {
           max = arr[i];
        }
       
    }
    printf("%d",max); 
    return 0;
    
}