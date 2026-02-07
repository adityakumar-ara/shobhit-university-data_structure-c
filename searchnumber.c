#include<stdio.h>
int main(){
    int arr[20] = {1,2,3,4,5,6,7,8,9,0,11,12,13,14,15,16,17,18,19,20};
    int n,i,found=0;
    printf("Enter your number ,who want to match:");
    scanf("%d",&n);
    for ( i = 0; i < 20; i++)
    {
       if (arr[i]==n)
       {
        printf("Wow! your number is match: %d",n);
        found = 1;
        break;
       }
    }
    if (found==0)
    {
      printf("your number is not match :%d",n);
    }
 return 0;  
}