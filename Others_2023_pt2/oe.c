#include<stdio.h>
int main()
{
	int number;
	printf("enter a number ");
	scanf("%d",&number);
	number%2==0 ? printf("Even") : printf("odd");
	return 0;
}
