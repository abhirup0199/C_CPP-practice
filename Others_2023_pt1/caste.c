#include<stdio.h>
int main()
{
	char category;
	printf("enter a category : ");
	scanf("%c",&category);
	if(category=='g'||category=='G')
	{
		printf("general");
	}
	else if(category=='s'||category=='S')
	{
		printf("sc");
	}
	else if(category=='t'||category=='T')
	{
		printf("st");
	}
	else if(category=='p'||category=='P')
	{
		printf("physically wicked");
	}
	else if(category=='o'||category=='O')
	{
		printf("obc");
	}
	else
	printf("wrong charecter");
}
