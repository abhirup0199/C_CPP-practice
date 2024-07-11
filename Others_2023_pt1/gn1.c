#include<stdio.h>
int main()
{
	float a , b , c;
	printf("Enter two numbers = ");
	scanf("%f%f",&a,&b);
	c=a-b;
	if(c>0)
	{
		printf("greater number is = %.2f",a);
	}
	else if(c==0)
	{
		printf("both numbers are equal");
	}
	else
	{
		printf("greater number is = %.2f",b);
	}
	return 0;
}
