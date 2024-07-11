#include<stdio.h>
#include<math.h>
int main()
{
	int no,rem,amn=0,no1;
	printf("enter num : ");
	scanf("%d",&no);
	no1=no;
	while(no>0){
		rem=no%10;
		amn=pow(rem,3)+amn;
		no=no/10;
	}
	if(no1==amn)
	printf("armstrong number: %d",amn);
	else
	printf("not armstrong number: %d",amn);
}
