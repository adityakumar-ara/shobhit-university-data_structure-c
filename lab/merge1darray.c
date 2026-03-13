#include<stdio.h>
int main(){
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={7,8,9,10};
    int s1 = sizeof(arr1)/sizeof(arr1[0]);
    int s2 = sizeof(arr2)/sizeof(arr2[0]);
    int total = s1 + s2;
    int arr[total];
    for (int i = 0; i < s1; i++)
    {
        arr[i] = arr1[i];
    }
     for (int i = 0; i < s2; i++)
    {
        arr[s1+i] = arr2[i];
    }
    printf("Marging array:");
    for (int i = 0; i < total; i++)
    {
        printf("%d",arr[i]);
    }
  return 0;  
}