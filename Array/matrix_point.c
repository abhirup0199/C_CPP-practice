#include<stdio.h>
#include<stdlib.h>
int main()
	{
		int **a , m , n ;
		int i , j , left_sum=0 , right_sum=0;
		printf("Enter the total size of m in the matrix[m x n] = ");
		scanf("%d",&m);
		printf("Enter the total size of n in the matrix[m x n] = ");
		scanf("%d",&n);
		a=(int**)malloc(sizeof(int*)*m);
		for (i = 0 ; i < m ; i++)
			{
				a[i]=(int*)malloc(sizeof(int)*n);
				for (j = 0 ; j < n ; j++)
					{
						printf("\nEnter the value of a[%d][%d] = ",i,j);
						scanf("%d",&a[i][j]);
					}
			}
		printf("In the %d x %d matrix\n",m,n);
		for (int i = 0 ; i < m ; i++)
			{
				for (int j = 0 ; j < n ; j++)
					{
						printf("%d\t",a[i][j]);
					}
				printf("\n");
			}
		for (int i = 0 ; i < m ; i++)
			{
				for (int j = 0 ; j < n ; j++)
					{
						if(i==j)
							{
								left_sum+=a[i][j];
							}
						else
						continue;
					}
			}
		for (int i = 0 ; i < m ; i++)
			{
				for (int j = 0 ; j < n ; j++)
					{
						if(i==)
							{
								left_sum+=a[i][j];
							}
						else
						continue;
					}
			}
		printf("Left diagonal sum = %d",left_sum);
	}
