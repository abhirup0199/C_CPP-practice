#include<stdio.h>
float si(int p,int t,float r)
	{
		float i=(p*t*r)/100;
		return i;
	}
int main(){
	int a , b;
	float c , d;
	printf("Enter the total ammount = ");
	scanf("%d",&a);
	printf("\nEnter the years = ");
	scanf("%d",&b);
	printf("\nEnter the rate of interest = ");
	scanf("%f",&c);
	
	d=si(a,b,c);
	
	printf("\nInterest ammount = %.2f\n",d);
}
