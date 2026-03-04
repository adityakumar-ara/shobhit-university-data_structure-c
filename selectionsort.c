#include<stdio.h>
int  main(){
    int arr[] = {1,3,4,2,5,7,8,9,55};
    int s = sizeof(arr)/sizeof(arr[0]);
    // printf("%d",s);
    for (int i = 0; i < s-1; i++)
    {
        int min = i;
        for (int j = i+1; j < s; j++)
        {
            if (arr[j]  arr[min])
            {
                min = j;
            }
            
        }
        int temp = arr[min];
        arr[min]=arr[i];
        arr[i]=temp;

    }
    printf("sorting array");
    for (int i = 0; i < s; i++)
    {
        printf("%d",arr[i]);
    }
    
   return 0; 
}