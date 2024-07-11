#include<stdio.h>
int main ()
{
    int arr[3][3],arr1[3][3],arr2[3][3],i,j,k,l,m,n;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter arr[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("1st MATRIX------");
    for ( i = 0; i < 3; i++)
    {
        printf("\n");
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        
    }
    printf("\n");
    for ( k = 0; k < 3; k++)
    {
        for ( l = 0; l < 3; l++)
        {
            printf("Enter arr1[%d][%d]=",k,l);
            scanf("%d",&arr1[k][l]);
        }
        
    }
    printf("2nd MATRIX------");
    for ( k = 0; k < 3; k++)
    {
        printf("\n");
        for ( l = 0; l < 3; l++)
        {
            printf("%d\t",arr1[k][l]);
        }
        
    }
    printf("\n");
    i=0ent;
    k=0;
    m=0;
    while (i < 3 && k < 3 && m < 3)
    {
         j=0;
         l=0;
         n=0;
        while (j < 3 && l < 3 && n < 3)
        {
            arr2[m][n]=arr[i][j]+arr1[k][l];
            j++;
            l++;
            n++;
        }
        i++;
        k++;
        m++;
    }
    printf("Sum of the elements-----\n");
    for ( m = 0; m < 3; m++)
    {
        printf("\n");
        for ( n = 0; n < 3; n++)
        {
            printf("%d\t",arr2[m][n]);
        }
        
    }
}   