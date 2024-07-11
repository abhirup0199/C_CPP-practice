#include<stdio.h>
int main ()
{
    int arr[4][4],i,sum=0,j;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("Enter arr[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (i==j)
            {
                sum=sum+arr[i][j];
            }
            else
            {
                continue;
            }
            
        }
        
    }
    printf("Sum of diagonal elements=%d",sum);
    
}