#include<stdio.h>
int main(){
	int i,x,l,p=1;
	printf("Enter Two Numbers: ");
	scanf("%d%d",&x,&l);
	if(x>l){
		for(i=x;i%l!=0;p++)
		i=x*p;
		printf("LCM: %d",i);
	}
	else
	{
		for(i=l;i%x!=0;p++)
		i=l*p;
		printf("LCM: %d",i);
	}
}
