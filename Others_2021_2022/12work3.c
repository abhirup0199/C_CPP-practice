#include<stdio.h>
int main(){
	int a,b,r,m;
	printf("Enter Two Number: ");
	scanf("%d%d",&a,&b);
	m=a*b;
	do
	{
		r=b%a;
		b=a;
		a=r;
	}while(r!=0);
	printf("LCM = %d",m/b);
}
