#include<stdio.h>
int main()
{
	float a,b,c,d,e,avg,f,g,h,i,j,avg2,sr;
	printf("Enter all Number");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	avg=(a+b+c+d+e)/5;
	printf("Average=%f",avg);
	scanf("%f%f%f%f%f",&f,&g,&h,&i,&j);
	avg2=(f+g+h+i+j)/5;
	printf("Average2=%f",avg2);
	sr=(avg/avg2)*100;
	printf("strick rate=%f",sr);
	return 0;
}
