//Find the Range of Prime Number in C Programming
#include<stdio.h>
int main()
{
int a,b,i,j,c=0;
printf("enter the upper and lower range of prime number:");
scanf("%d%d",&a,&b);
printf("the prime numbers are\n");
for(i=a;i<=b;i++)
	{
		for(j=2;j<i;j++)
	{
		if(i%j==0)
		c++;
	}
		if(c==0)
		printf("%d\n",i);
		c=0;
	}
return 0;
}
