#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
    int lr=0,up=4,f=0,mid;
    int search;
    printf("enter number who want to serach:");
    scanf("%d",&search);
    while(lr<=up){
          mid = (lr+up)/2;
          if (arr[mid]==search)
          {
            f=1;
            break;
          }
          else if (arr[mid]<search)
          {
            lr=mid+=1;
          }
          else
          up = mid-1;
    }
    if (f==1)
    {
        printf("search number is found at index:%d",mid);
    }
    else
    {
        printf("not found");
    }
   return 0; 
}