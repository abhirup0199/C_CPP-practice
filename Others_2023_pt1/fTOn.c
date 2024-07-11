#include<stdio.h>
#include<math.h>
int main()
{
	for(int i=4; i<=9; i++)
	{
		printf("Integer = %d\n",i);
		int p=pow(i,2);
		printf("Square of the integer = %d",p);
	}
	return 0;
}
