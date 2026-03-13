#include<stdio.h>
int main(){
    int aar[3][3],i,j,sum=0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("enter element for Row %d , coulmn %d=",i,j);
            scanf("%d",&aar[i][j]);
        }
        
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
           printf("%d",aar[i][j]);
        }
        printf("\n\n");
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (i==j)
            {
                sum+=aar[i][j];
            }
            
        }
        
    }
    printf("%d",sum);
    return 0;
}