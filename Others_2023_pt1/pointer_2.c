//pointer_2
#include<stdio.h>
int main(){
	int a=30;
	int *p;
	p=&a;
	printf("%d",*p);
	*p=75;
	printf("\n%d",a);
	return 0;
}
