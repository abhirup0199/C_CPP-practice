#include<stdio.h>
int main(){
	int as,te,ni,nl,pm,lm;
	printf("enter annual sales : ");
	scanf("%d",&as);
	printf("\nenter total expense : ");
	scanf("%d",&te);
	ni=as-te;
	nl=te-as;
	pm=(ni/as)*100;
	lm=(nl/as)*100;
	if(ni>0)
	{
		printf("your company made profit");
		printf("\nprofit margin is : %d",pm);
	}
	if(nl>0)
	{
		printf("your company is in loss");
		printf("\nloss margin is : %d",lm);
	}
	else
	printf("your company made neither profit nor loss");
	return 0;
}
