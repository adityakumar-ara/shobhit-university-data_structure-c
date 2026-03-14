#include<stdio.h>
int main(){
    int arr[5]={7,6,5,1,2};
    int i=3,j,temp;
    while (i>=0)
    {
        j=0;
        while (j<=i)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;

            }
            j++;
        }
        i--;
    }
    int k = 0;
    printf("Sorted array: ");
    while (k < 5) {
        printf("%d ", arr[k]);
        k++;
    }
    printf("\n");
    return 0;
}