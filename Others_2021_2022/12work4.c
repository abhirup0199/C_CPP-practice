#include<stdio.h>
int main(){
	int a,b,n,m;
	printf("Enter Two Number: ");
	scanf("%d%d",&a,&b);
	m=a;
	n=b;
	while(a!=b)	{
		if(a>b)
		b=b+n;
		else
		a=a+m;
	}
	printf("LCM = %d",a);
}
