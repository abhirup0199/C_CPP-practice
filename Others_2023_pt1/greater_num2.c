#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter 3 numbers = ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c){
		printf("greater number is : %d",a);
	}
	if(b>a&&b>c){
		printf("greater number is : %d",b);
	}
	if(c>a&c>b){
		printf("greater number is : %d",c);
	}
	if(a==b&&b==c&&c==a){
		printf("all numbers are equal");
	}
	return 0;
}
