// #include<stdio.h>
// int main(){
//     int arr[20] = {1,2,3,4,5,6,7,8,9,0,11,12,13,14,15,16,17,18,19,20};
//     int n,i,found=0;
//     printf("Enter your number ,who want to match:");
//     scanf("%d",&n);
//     for ( i = 0; i < 20; i++)
//     {
//        if (arr[i]==n)
//        {
//         printf("Wow! your number is match: %d",n);
//         found = 1;
//         break;
//        }
//     }
//     if (found==0)
//     {
//       printf("your number is not match :%d",n);
//     }
//  return 0;  
// }


// ----------------------------------------------------------------------------------

#include<stdio.h>
int main(){
   int a[20],i,n,s;
   printf("enter number of elements:");
   scanf("%d",&n);
   printf("enter elemnts:");
   for ( i = 0; i < n; i++)
   {
      scanf("%d",&a[i]);
   }
   printf("Enter search number:");
   scanf("%d",&s);
   for ( i = 0; i < n; i++)
   {
      if (a[i]==s)
      {
         printf("Your number is find at index :%d",i);
         return 0;
      }
      
   }
   printf("sorry your number is not found");
   return 0;
}