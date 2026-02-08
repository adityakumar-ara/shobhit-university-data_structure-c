#include<stdio.h>
int main(){
    int a[20],i,n,new,pos;
    printf("enter number of element:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter elements%d:",n);
        scanf("%d",&a[i]);
    }
    printf("enter new element:");
    scanf("%d",&new);
    printf("enter position:");
    scanf("%d",&pos);
    n+=1;
    for ( i = n; i >=pos; i--)
    {
     a[i] = a[i-1];   
    }
    a[pos-1] = new;
    for ( i = 0; i < n; i++)
    {
      printf("%d",a[i]);
    }
   return 0; 
}