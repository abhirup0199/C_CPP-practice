//pointer_3
#include<stdio.h>
int main(){
	int a=30;
	int *p,**k;
	p=&a;
	k=&p;
	printf("%d",*p);
	printf("\n%p",*k);
	*p=75;
	printf("\n%d",a);
	a=93;
	printf("\n%d",*p);
	printf("\n%d",**k);
	return 0;
}
