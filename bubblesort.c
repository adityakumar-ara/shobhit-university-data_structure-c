#include<stdio.h>
int main(){
    int arr[] = {1,2,3,8,5,6,7};
    int s = sizeof(arr)/sizeof(arr[0]);
    // printf("%d",s);
    for (int i = 0; i < s-1; i++)
    {
        for (int j = 0; j< s-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    printf("Sorting arr");
    for (int i = 0; i < s; i++)

    {
       printf("%d",arr[i]);
    }
    return 0;
}