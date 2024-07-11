#include<stdio.h>
int main ()
{
    int arr[3][3], i , j , sum=0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("enter arr[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    sum=arr[0][0]+arr[0][2]+arr[2][0]+arr[2][2];
    printf("Sum of corner elements = %d",sum);
    
}