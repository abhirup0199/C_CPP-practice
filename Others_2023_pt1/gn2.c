#include<stdio.h>
int main()
{
	float a , b , c , d , e , f;
	printf("Enter three numbers = ");
	scanf("%f%f%f",&a,&b,&c);
	d=a-b;
	e=b-c;
	f=c-a;
	if(d>0&&f<0)
	{
		printf("greater number is = %.2f",a);
	}
	else if(d<0&&e>0)
	{
		printf("greater number is = %.2f",b);
	}
	else if(f>0&&e<0)
	{
		printf("greater number is = %.2f",c);
	}
	else
	{
		printf("all numbers are equal");
	}
	return 0;
}
