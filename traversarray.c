// input array = {10,20,30,40,50,60,70,80,90};
// output = 10
//          20 
//          30 
//          40 
//          50
//          60
//          70
//          80
//          90

#include<stdio.h>
int main(){
    int arr[20] = {1,2,3,4,5,6,7,8,9,10};
    int i,n;
    // printf("enter number of element");
    // scanf("%d",&n);
    
    for ( i = 0; i < 10; i++)
    {
      printf("%d\n",arr[i]);  
    }
 return 0;   
}      