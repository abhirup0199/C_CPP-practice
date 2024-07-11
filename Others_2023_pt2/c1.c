#include<stdio.h>
int main(){
	float a , b , sum , sub , multi , div ;
	printf(" Enter value of a and b = ");
	scanf("%f%f",&a,&b);
	sum=a+b;
		printf("Sum = %.0f\n",sum);
	sub=a-b;
		printf("Sub = %.0f\n",sub);
	multi=a*b;
		printf("Multi = %.2f\n",multi);
	div=a/b;
		printf("Div = %.2f\n",div);
return 0;
}
