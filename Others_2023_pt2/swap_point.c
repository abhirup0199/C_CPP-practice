#include<stdio.h>
void swap(int *x , int *y)
	{
		*x=*x+*y;
		*y=*x-*y;
		*x=*x-*y;
	}
int main()
	{
		int a , b ;
		printf("Enter the value of a & b = ");
		scanf("%d%d",&a,&b);
		swap(&a,&b);
		printf("Current value of a = %d\n",a);
		printf("Current value of b = %d\n",b);
	}
