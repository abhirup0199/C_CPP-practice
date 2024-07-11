#include<stdio.h>
int main(){
	int a,b,c,d,e,f;
	printf("enter 3 numbers = ");
	scanf("%d%d%d",&a,&b,&c);
	d=a-b;
	e=b-c;
	f=c-a;
	if(d>0&&f<0){
		printf("greater number is : %d",a);
	}
	else if(e>0&&d<0){
		printf("greater number is : %d",b);
	}
	else if(f>0&&e<0){
		printf("greater number is : %d",c);
	}
	else if(f==0&&e==0&&d==0){
		printf("all numbers are equal");
	}
	return 0;
}
