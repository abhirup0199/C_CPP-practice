#include<stdio.h>
int main()
	{
		int arr[100] ,n, i ;
		printf("enter the size of the array = ");
		scanf("%d",&n);
		printf("Enter the elements - ");
		for(i=0;i<n;i++)
		{
			scanf("%d\n",&arr[i]);
		}
		printf("The elements - ");
		for(i=0;i<n;i++)
		{
			printf("%d\n",arr[i]);
		}
		return 0;
	}
