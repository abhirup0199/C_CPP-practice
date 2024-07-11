#include<stdio.h>
int main()
{
	int a , b , c, greatest;
	printf("enter the value of a , b, c = ");
	scanf("%d%d%d",&a,&b,&c);
	greatest=(a>b)?(a>c?a:c):(b>c?b:c);
	printf("The Greatest Number %d",greatest);
	return 0;
}
