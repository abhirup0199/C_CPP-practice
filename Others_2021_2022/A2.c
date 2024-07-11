#include<stdio.h>
int main(){
	float x,y,a,s,d,m,ans;
	printf("enter two numbers : ");
	scanf("%f%f",&x,&y);
	a=x+y;
	s=x-y;
	d=x/y;
	m=x*y;
	if(ans=a)
	printf("the addition is : %f\n",a);
	if(ans=s)
	printf("the substraction is : %f\n",s);
	if(ans=d)
	printf("the divition is : %f\n",d);
	if(ans=m)
	printf("the multiplication is : %f\n",m);
	else
	printf("wrong input");
}
