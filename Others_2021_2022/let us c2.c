#include<stdio.h>
int main(){
	int qty1,qty2,qty3,qty4,qty5,qty6,qty7,qty8,qty9,qty10;
	int rate1,rate2,rate3,rate4,rate5,rate6,rate7,rate8,rate9,rate10;
	float dis,tot1,tot2;
	printf("enter quantity : ");
	scanf("%d%d%d%d%d%d%d%d%d%d",&qty1,&qty2,&qty3,&qty4,&qty5,&qty6,&qty7,&qty8,&qty9,&qty10);
	printf("enter rate : ");
	scanf("%d%d%d%d%d%d%d%d%d%d",&rate1,&rate2,&rate3,&rate4,&rate5,&rate6,&rate7,&rate8,&rate8,&rate9,&rate10);
	tot1=(qty1*rate1)+(qty2*rate2)+(qty3*rate3)+(qty4*rate4)+(qty5*rate5)+(qty6*rate6)+(qty7*rate7)+(qty8*rate8)+(qty9*rate9)+(qty10*rate10);
	if(tot1>30000)
	dis=40.5;
	if(tot1>=25000)
	dis=32.5;
	if(tot1>=17000)
	dis=25.5;
	if(tot1>=10000)
	dis=20;
	if(tot1>=5000)
	dis=13.5;
	if(tot1>3000)
	dis=10;
	else
	dis=0;
	tot2=(tot1)-(tot1*dis/100);
	printf("total value : %f",tot2);
}
