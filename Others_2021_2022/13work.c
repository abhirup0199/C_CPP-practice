#include<stdio.h>
int main(){
	int a,b,r;
	printf("Enter Two Numbers: ");
	scanf("%d%d",&a,&b);
	r=b%a;
	while(r!=0){
		b=a;
		a=r;
		r=b%a;
	}
	printf("GCD: %d",b);
}
