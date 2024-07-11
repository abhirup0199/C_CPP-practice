#include<stdio.h>
int main(){
	int a,b,r;
	printf("Enter Two Number: ");
	scanf("%d%d",&a,&b);
	do
	{
		r=b%a;
		b=a;
		a=r;
	}while(r!=0);
	printf("GCD = %d",b);
}
