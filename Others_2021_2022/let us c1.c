#include<stdio.h>
int main(){
	int qty;
	float dis,rate,tot1,tot2;
	printf("enter quantity and rate : ");
	scanf("%d%f",&qty,&rate);
	tot1=qty*rate;
	if(tot1>10000)
	dis=40.5;
	if(tot1>=5000)
	dis=32.5;
	if(tot1>=4000)
	dis=25.5;
	if(tot1>=3000)
	dis=20;
	if(tot1>=2000)
	dis=13.5;
	if(tot1>1000)
	dis=10;
	else
	dis=0;
	tot2=(tot1)-(tot1*dis/100);
	printf("total value : %f",tot2);
}
