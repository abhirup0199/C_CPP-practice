#include<stdio.h>
void sum(int *x , int *y)
	{
		*y=*y+*x;
	}
int main()
	{
		int a[100] , b , c=0;
		printf("Enter the size of the array = ");
		scanf("%d",&b);
		for(int i=0 ; i<b ; i++)
			{
				printf("Enter the value in a[%d] = ",i);
				scanf("%d",&a[i]);
			}
		for(int i=0 ; i<b ; i++)
			{
				printf("Value in a[%d] = %d\n",i,a[i]);
			}
		for(int i=0 ; i<b ; i++)
			{
				sum(&a[i],&c);
			}
		printf("Sum of the array elements = %d\n",c);
	}
